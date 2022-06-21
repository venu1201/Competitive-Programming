from pickle import TRUE


def is_full_house(hand):
    cnt=0
    for i in range(len(hand)):               # we dont have any use of type of card so we removes and counted number of jokers in the hand
        if(hand[i]=='j'):
            cnt+=1
            hand[i]=-1
            continue
        hand[i]=hand[i][1:len(hand[i])]       #gothrough the code number is changed to int and char is stayed same
        if(hand[i]=='k' or hand[i]=='j' or hand[i]=='a' or hand[i]=='q'):
            continue
        else:
            hand[i]=int(hand[i])
    arr={}                                  #initializing dic to count the frequency of cards in hand
    for i in range(13):
        arr[i]=0
   
    for i in range(len(hand)):              #counted the frequency of the cards in hand
        if(hand[i]==-1):
            continue
        elif(hand[i]=='k'):
            arr[1]+=1
        elif(hand[i]=='j'):
            arr[3]+=1            
        elif(hand[i]=='a'):
            arr[0]+=1
        elif(hand[i]=='q'):
            arr[2]+=1
        else:
            arr[hand[i]+2]+=1
   
    brr=[]
    for i in range(len(arr)):               #only putting elements which have more than 0 frequency
        if(arr[i]!=0):
            brr.append(arr[i])
  
    if(len(brr)==2):                    # the logic is when size of brr is 2 then it will be of form 3:2 or 2:3 ...if jokers exists then we can split it accordingly
        return True
    if(len(brr)==1 and cnt>=2):         #when the size of brr is 1 then jokers come to play
        return True
    return False                    #if no consition satisfies then it return false
        
    
    


hand=['sq','hq','d7','s7','j']
x=is_full_house(hand)
print(x)