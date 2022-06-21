#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Data_size 100

struct Vehicle
{
    char registration_no[20];
    char vehicle_type[20];
    char maker[20];
    char engine_no[20];
    int mf_year;
    int price;
    int Owners_ID;
};
struct Owner
{
    int Owners_ID;
    char Owner_name[20];
    char Father_name[20];
    char Address[50];
    int purchase_date[5];
    int purchase_month[5];
    int purchase_year[5];
    double purchase_amount[5];
    struct Vehicle Total_vehicles[5];
    int num_vehicles;    
};
//Question1 begin
int add_owner(struct Owner * O, int * current_owner) 
{
    int temp,i,flag=0;
    printf("enter new owner ID: ");
    scanf("%d", &temp);

    for(i=0; i<Data_size; i++)
    {
        if(O[i].Owners_ID == temp)
        {
            printf("Owner with ID already exists");
            flag=1;
        }
    }
    if (flag == 0)
    {
        O[*current_owner].Owners_ID = temp;
        printf("Enter Owner name: ");
        scanf("%s", O[*current_owner].Owner_name);
        printf("Enter Father's name: ");
        scanf("%s", O[*current_owner].Father_name);
        printf("Enter Address: ");
        scanf("%s", O[*current_owner].Address);

        O[*current_owner].num_vehicles=0;
        printf("User added successfully with name %s and ID %d \n", O[*current_owner].Owner_name, O[*current_owner].Owners_ID);
    }
    *current_owner++;
    return flag;
}//Question1 end
//Question2 begin
int Add_Vehicle(struct Owner * O) 
{
    int id, i, flag=1;
    printf("Enter the ID of the owner: ");
    scanf("%d", &id);

    for(i=0;i<Data_size;i++)
    {
        if(O[i].Owners_ID == id)
        {
            if(O[i].num_vehicles>4)
            {
                printf("User with ID %d already has 5 vehicles\n", O[i].Owners_ID);
            }
            else
            {   
                int current_vehicle = O[i].num_vehicles;
                //added to vehicles entry of owner
                O[i].Total_vehicles[current_vehicle].Owners_ID = id;
                printf("Enter Vehicle Registration number: ");
                scanf("%s", O[i].Total_vehicles[current_vehicle].registration_no);
                printf("Enter Vehicle Type: ");
                scanf("%s", O[i].Total_vehicles[current_vehicle].vehicle_type);
                printf("Enter Vehicle Maker: ");
                scanf("%s", O[i].Total_vehicles[current_vehicle].maker);
                printf("Enter Vehicle Engine number: ");
                scanf("%s", O[i].Total_vehicles[current_vehicle].engine_no);
                printf("Enter Year of manufacture: ");
                scanf("%d", &O[i].Total_vehicles[current_vehicle].mf_year);
                printf("error here");
                printf("Enter Vehicle Price: ");
                scanf("%d", &O[i].Total_vehicles[current_vehicle].price);

                //added to remaining owner properties
                printf("Enter Date(dd) of purchase of Vehicle: ");
                scanf("%d", &O[i].purchase_date[current_vehicle]);
                printf("Enter Month(mm) of purchase of Vehicle: ");
                scanf("%d", &O[i].purchase_month[current_vehicle]);
                printf("Enter Year(yy) of purchase of Vehicle: ");
                scanf("%d", &O[i].purchase_year[current_vehicle]);
                O[i].purchase_amount[current_vehicle] = O[i].Total_vehicles[current_vehicle].price;
                O[i].num_vehicles++;
                flag=0;
                printf("Vehicle with registration id %s added successfully to owner %s \n", O[i].Total_vehicles[current_vehicle].registration_no, O[i].Owner_name);
            }
        }
    }
    if(flag==1)
    {
        printf("no users with ID found");
    }
    return flag;
}//Question2 end
//Question3 begin
int Delete_Vehicle(struct Owner * O, int * current_owner)
{
    int id, i, j;
    printf("Enter the ID of the owner: ");
    scanf("%d", &id);

    for(i=0;i<Data_size;i++)
    {
        if(O[i].Owners_ID == id)
        {
            char VehicleID[20];
            printf("enter registration number of vehicle: ");
            scanf("%s", &VehicleID);

            for(j=0;j<O[i].num_vehicles;j++)
            {
                if(O[i].Total_vehicles[j].registration_no==VehicleID)
                {
                    while(j<O[i].num_vehicles-1)
                    {
                        O[i].Total_vehicles[j]=O[i].Total_vehicles[j+1];
                        j++;
                    }
                    printf("vehicle with registration ID %s Deleted Successfully \n", VehicleID);
                    j++;
                }
            }
            O[i].num_vehicles--;
            if(O[i].num_vehicles==0)
            {
                while(i<*current_owner-1)
                {
                    O[i]=O[i+1];
                    i++;   
                }
                *current_owner--;
                i++;
                printf("The Owner had no cars left so they were Deleted from the data \n");
            }
        }
    }
    return 0;
}//Q3 end
//Q4 start
void swap(struct Vehicle *a, struct Vehicle *b)
{
    struct Vehicle temp = *a;
    *a = *b;
    *b = temp;
}

void sort_by_mfdate(struct Owner * O, int current_owner)
{
    int id, i, j, k;
    printf("Enter Owner ID: ");
    scanf("%d", &id);

    for(i=0; i<current_owner; i++)
    {
        if(O[i].Owners_ID==id)
        {
            for(j=0; j<O[i].num_vehicles-1; j++)
            {
                for(k=0; k<O[i].num_vehicles-1; k++)
                {
                    if(O[i].Total_vehicles[j].mf_year>O[i].Total_vehicles[k].mf_year)
                    {
                        swap(&O[i].Total_vehicles[j], &O[i].Total_vehicles[k]);
                    }
                }
            }
        }
    }
}//Q4 end
//Q5 start
void Dlt_less_1990(struct Owner * O, int * current_owner)
{
    int i,j;
    for(i=0; i<*current_owner; i++)
    {
        for(j=0; j<O[i].num_vehicles;j++)
        {
            if(O[i].Total_vehicles[j].mf_year<1990)
            {
                int c=j;
                while(c<O[i].num_vehicles-1)
                {
                    O[i].Total_vehicles[j]=O[i].Total_vehicles[j+1];
                    c++;
                }
                printf("Vehicle Deleted\n");
                O[i].num_vehicles--;
            }
        }
        if(O[i].num_vehicles==0)
        {
            int d=i;
            while(d<*current_owner-1)
            {
                O[d]=O[d+1];
                d++;
            }
            *current_owner--;
            printf("Owner had no cars left in data, hence removed\n");
        }
    }
}//Q5 end
//Q6 start
void max_and_second_max(struct Owner * O, int current_size)
{
    int i, max1, max2;
    max1=max2=O[0].num_vehicles;
    for(i=0; i<current_size;i++)
    {
        if(O[i].num_vehicles>max1)
        {
            max2=max1;
            max1=O[i].num_vehicles;
        }
        else if(O[i].num_vehicles>max2 && O[i].num_vehicles<max1)
        {
            max2=O[i].num_vehicles;
        }
    }
    int j;
    for(j=0; j<current_size; j++)
    {
        if(O[j].num_vehicles==max1)
        {
            printf("Owner %s with ID %d has maximum number of cars", O[j].Owner_name, O[j].Owners_ID);
        }
        else if(O[j].num_vehicles==max2)
        {
            printf("Owner %s with ID %d has second maximum number of cars", O[j].Owner_name, O[j].Owners_ID);
        }
    }
}//end question6
//Question7 begin
void check_two_wheeler(struct Owner * O, int current_size)
{
    int i, counter, j;
    for(i=0; i<current_size;i++)
    {   
        counter=0;
        for(j=0;j<O[i].num_vehicles;j++)
        {
            if(toupper(O[i].Total_vehicles[j].vehicle_type) == "2-WHEELER")
            {
                counter++;
            }
        }
        if(counter>1)
        {
            printf("%s with ID %d has purchased more than 1, 2-wheelers", O[i].Owner_name, O[i].Owners_ID);
        }
    }
}//Question7 end
//Question8 begin
void find_max_cost(struct Owner * O, int current_size)
{
    int O_ID,i,choice,flag;
    char O_Name[20];
    printf("Do you want to enter Name(1) or ID(2): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            flag=1;
            break;
        case 2:
            flag=2;
            break;
        default:
            flag=0;
            printf("Invalid input");
    }
    if(flag==1)
    {
        printf("enter the name of Owner: ");
        scanf("%s", &O_Name);
        int check=0;
        for(i=0; i<current_size; i++)
        {
            if(toupper(O[i].Owner_name)==toupper(O_Name))
            {
                int max = O[i].purchase_amount[0];
                int j,this_vehicle=0;
                for(j=0; j<O[i].num_vehicles; j++)
                {
                    if(O[i].purchase_amount[j]>max)
                    {
                        max = O[i].purchase_amount[j];
                        this_vehicle=j;
                    }
                }
                check=1;
                printf("%s has the costliest vehicle of registration %s which costs %d\n",O[i].Owner_name,O[i].Total_vehicles[this_vehicle].registration_no, max);
            }
        }
        if(check==0)
        {
            printf("owner with given name does not exist\n");
        }
    }
    if(flag==2)
    {
        printf("enter the ID of Owner: ");
        scanf("%d", &O_ID);
        int check=0;
        for(i=0; i<current_size; i++)
        {
            if(O[i].Owners_ID==O_ID)
            {
                int max = O[i].purchase_amount[0];
                int j,this_vehicle=0;
                for(j=0; j<O[i].num_vehicles; j++)
                {
                    if(O[i].purchase_amount[j]>max)
                    {
                        max = O[i].purchase_amount[j];
                        this_vehicle=j;
                    }
                }
                check=1;
                printf("%d has the costliest vehicle of registration %s which costs %d\n",O[i].Owners_ID,O[i].Total_vehicles[this_vehicle].registration_no, max);
            }
        }
        if(check==0)
        {
            printf("owner with given ID does not exist\n");
        }
    }
}//Question8 end
//Question9 begin
void check_by_brand(struct Owner * O, int current_size)
{
    char brand[20];
    printf("Enter the brand of vehicle: ");
    scanf("%s", &brand);
    int i,j;
    for(i=0; i<current_size; i++)
    {
        int v_counter=0;
        for(j=0; j<O[i].num_vehicles; j++)
        {
            if(toupper(O[i].Total_vehicles[j].maker)==toupper(brand))
            {
                v_counter++;
            }
        }
        if(v_counter>1)
        {
            printf("%s has more than one cars of brand %s\n", O[i].Owner_name, brand);
        }
    }
}//Question9 end
//Question10 begin
void check_type_by_year(struct Owner * O, int current_size)
{
    int year;
    printf("Enter the year to check: ");
    scanf("%d", &year);
    int i,j;
    for(i=0; i<current_size; i++)
    {
        int v_counter=0;
        for(j=0; j<O[i].num_vehicles; j++)
        {
            if(O[i].purchase_year[j]==year && toupper(O[i].Total_vehicles[j].vehicle_type)=="3-WHEELER")
            {
                v_counter++;
            }
        }
        if(v_counter>0)
        {
            printf("%s has a 3-wheeler purchased in given year %d\n",O[i].Owner_name, year);
        }
    }
}//Question10 end
int main()
{
    int owner_counter=0;
    struct Owner Owner_Data[Data_size];

    int choice;
    int repeat;
    do
    {
        printf("1)Add new Owner\n");
        printf("2)Enter new vehicle\n");
        printf("3)Delete a Vehicle\n");
        printf("4)List all cars of a owner in ascending order of year of manufacture\n");
        printf("5)Delete all vehicles manufactured before 1990 from the database\n");
        printf("6)List owners with maximum and second maximum number of vehicles\n");
        printf("7)Find owners with more than 1, 2wheelers\n");
        printf("8)Find out the price of the costliest vehicle owned by the owner entered by the user\n");
        printf("9)Find the owners who own more than one vehicle of the brand chosen by the user\n");
        printf("10)List the owners who purchased 3-wheeler in the year provided by the user\n");
        printf("Enter the number operation you want to do: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                add_owner(Owner_Data, &owner_counter);
                break;
            case 2:
                Add_Vehicle(Owner_Data);
                break;
            case 3:
                Delete_Vehicle(Owner_Data, &owner_counter);
                break;
            case 4:
                sort_by_mfdate(Owner_Data, owner_counter);
                break;
            case 5:
                Dlt_less_1990(Owner_Data, &owner_counter);
                break;
            case 6:
                max_and_second_max(Owner_Data, owner_counter);
                break;
            case 7:
                check_two_wheeler(Owner_Data, owner_counter);
                break;
            case 8:
                find_max_cost(Owner_Data, owner_counter);
                break;
            case 9:
                check_by_brand(Owner_Data, owner_counter);
                break;
            case 10:
                check_type_by_year(Owner_Data, owner_counter);
            default:
                printf("Invalid input \n");
        }

        printf("do you want to continue(Y-1,N-0): ");
        scanf("%d", &repeat);
    }while(repeat);
}