package com.chegg.jul5b.covid;

import java.sql.Connection;

import java.sql.PreparedStatement;

import java.sql.ResultSet;

import java.sql.SQLException;

import com.chegg.jul1b.dbconnect.Database;

import javafx.application.Application;

import javafx.geometry.Insets;

import javafx.geometry.Pos;

import javafx.scene.Scene;

import javafx.scene.control.Alert;

import javafx.scene.control.Alert.AlertType;

import javafx.scene.control.Button;

import javafx.scene.control.Label;

import javafx.scene.control.TextField;

import javafx.scene.layout.GridPane;

import javafx.scene.paint.Color;

import javafx.scene.text.Font;

import javafx.scene.text.FontWeight;

import javafx.scene.text.Text;

import javafx.stage.Stage;

public
class PatientsApplication extends Application
{

public
    static final String BLANK = "";

    GridPane gridPane;

    Button addPatientButton, searchPatientButton;

    Text recordKeepingText, searchPatientText;

    Label patientIdLabel, patientNameLabel, patientAddressLabel, covidEffectedLabel, patientIdResultLabel, patientNameResultLabel, patientAddressResultLabel, covidEffectedResultLabel, patientIdSearchLabel;

    TextField patientIdField, patientNameField, patientAddressField, covidEffectedField, patientIdResultField, patientNameResultField, patientAddressResultField, covidEffectedResultField, patientIdSearchField;

    @Override

        public void
        start(Stage stage)
    {

        stage.setTitle("Assignmnet No.2 of YOUR_ID");

        gridPane = new GridPane();

        gridPane.setAlignment(Pos.CENTER);

        gridPane.setHgap(10);

        gridPane.setVgap(10);

        gridPane.setPadding(new Insets(25, 25, 25, 25));

        recordKeepingText = new Text("Record Keeping:");

        recordKeepingText.setStyle("-fx-text-inner-color: Blue;");

        recordKeepingText.setFont(Font.font("Tahoma", FontWeight.NORMAL, 20));

        recordKeepingText.setFill(Color.BLUE);

        gridPane.add(recordKeepingText, 0, 0);

        patientIdLabel = new Label("Patient ID:");

        gridPane.add(patientIdLabel, 0, 1);

        patientIdField = new TextField();

        gridPane.add(patientIdField, 1, 1);

        patientNameLabel = new Label("Patient Name:");

        gridPane.add(patientNameLabel, 2, 1);

        patientNameField = new TextField();

        gridPane.add(patientNameField, 3, 1);

        patientAddressLabel = new Label("Patient Address:");

        gridPane.add(patientAddressLabel, 0, 2);

        patientAddressField = new TextField();

        gridPane.add(patientAddressField, 1, 2);

        covidEffectedLabel = new Label("Covid Effected(Y/N):");

        gridPane.add(covidEffectedLabel, 2, 2);

        covidEffectedField = new TextField();

        gridPane.add(covidEffectedField, 3, 2);

        addPatientButton = new Button("Add Patient Record");

        gridPane.add(addPatientButton, 0, 3);

        searchPatientText = new Text("Search Patient Record:");

        searchPatientText.setStyle("-fx-text-inner-color: blue;");

        searchPatientText.setFont(Font.font("Tahoma", FontWeight.NORMAL, 20));

        searchPatientText.setFill(Color.BLUE);

        gridPane.add(searchPatientText, 0, 4);

        patientIdSearchLabel = new Label("Patient ID:");

        gridPane.add(patientIdSearchLabel, 0, 5);

        patientIdSearchField = new TextField();

        gridPane.add(patientIdSearchField, 1, 5);

        searchPatientButton = new Button("Search Patient Record");

        gridPane.add(searchPatientButton, 2, 5);

        patientIdResultLabel = new Label("Patient ID:");

        gridPane.add(patientIdResultLabel, 0, 6);

        patientIdResultField = new TextField();

        patientIdResultField.setDisable(true);

        gridPane.add(patientIdResultField, 1, 6);

        patientNameResultLabel = new Label("Patient Name:");

        gridPane.add(patientNameResultLabel, 0, 7);

        patientNameResultField = new TextField();

        patientNameResultField.setDisable(true);

        gridPane.add(patientNameResultField, 1, 7);

        patientAddressResultLabel = new Label("Patient Address:");

        gridPane.add(patientAddressResultLabel, 0, 8);

        patientAddressResultField = new TextField();

        patientAddressResultField.setDisable(true);

        gridPane.add(patientAddressResultField, 1, 8);

        covidEffectedResultLabel = new Label("Effected by Virus:");

        gridPane.add(covidEffectedResultLabel, 0, 9);

        covidEffectedResultField = new TextField();

        covidEffectedResultField.setDisable(true);

        gridPane.add(covidEffectedResultField, 1, 9);

        addPatientButton.setOnAction(actionEvent->{
            String patientId = patientIdField.getText();

            String patientName = patientNameField.getText();

            String patientAddress = patientAddressField.getText();

            String covidEffected = covidEffectedField.getText();

            if (BLANK.equals(patientId) || BLANK.equals(patientName) || BLANK.equals(patientAddress) || BLANK.equals(covidEffected))
            {

                this.alert("Blank Data", "Please enter all input fields", AlertType.ERROR);
            }
            else
            {

                Connection connection = null;

                PreparedStatement statement = null;

                try
                {

                    connection = Database.getDBConnection();

                    connection.setAutoCommit(false);

                    String sql = "INSERT INTO PATIENT_DETAILS VALUES (?, ?, ?, ?)";

                    statement = connection.prepareStatement(sql);

                    statement.setString(1, patientId);

                    statement.setString(2, patientName);

                    statement.setString(3, patientAddress);

                    statement.setString(4, covidEffected);

                    int count = statement.executeUpdate();

                    if (count == 1)
                    {

                        this.alert("Success", "Patient record created successfully", AlertType.INFORMATION);
                    }
                }
                catch (Exception e)
                {

                    e.printStackTrace();
                }
                finally
                {

                    if (null != statement)
                    {

                        try
                        {

                            statement.close();
                        }
                        catch (SQLException e)
                        {

                            e.printStackTrace();
                        }
                    }

                    if (null != connection)
                    {

                        try
                        {

                            connection.close();
                        }
                        catch (SQLException e)
                        {

                            e.printStackTrace();
                        }
                    }
                }
            }
        });

        searchPatientButton.setOnAction(actionEvent->{
            String patientId = patientIdSearchField.getText();

            if (BLANK.equals(patientId))
            {

                this.alert("Blank Data", "Please enter Patient ID to search for", AlertType.ERROR);
            }
            else
            {

                Connection connection = null;

                PreparedStatement statement = null;

                try
                {

                    connection = Database.getDBConnection();

                    connection.setAutoCommit(false);

                    String sql = "SELECT * FROM PATIENT_DETAILS WHERE PATIENT_ID = ?";

                    statement = connection.prepareStatement(sql);

                    statement.setString(1, patientId);

                    ResultSet rs = statement.executeQuery();

                    while (rs.next())
                    {

                        patientIdResultField.setText(rs.getString(1));

                        patientNameResultField.setText(rs.getString(2));

                        patientAddressResultField.setText(rs.getString(3));

                        covidEffectedResultField.setText(rs.getString(4));
                    }
                }
                catch (Exception e)
                {

                    e.printStackTrace();
                }
                finally
                {

                    if (null != statement)
                    {

                        try
                        {

                            statement.close();
                        }
                        catch (SQLException e)
                        {

                            e.printStackTrace();
                        }
                    }

                    if (null != connection)
                    {

                        try
                        {

                            connection.close();
                        }
                        catch (SQLException e)
                        {

                            e.printStackTrace();
                        }
                    }
                }
            }
        });
        Scene scene = new Scene(gridPane, 1200, 600);
        stage.setScene(scene);
        stage.show();
    }
public
    void alert(String title, String message, AlertType alertType)
    {
        Alert alert = new Alert(alertType);
        alert.setTitle(title);
        alert.setHeaderText(null);
        alert.setContentText(message);
        alert.showAndWait();
    }
public
    static void main(String[] args)
    {
        launch(args);
    }
}
Step 2 : Create Database.java and add below code.

         package com.chegg.jul5b.covid;

import java.sql.Connection;

import java.sql.DriverManager;

import java.sql.SQLException;

import java.util.logging.Level;

import java.util.logging.Logger;

public
class Database
{

private
    static final Logger logger = Logger.getLogger(Database.class.getName());

private
    static final String databaseURL = "jdbc:ucanaccess://e://Java//MsAccess//Patients.accdb";

private
    Database()
    {
    }

public
    static Connection getDBConnection() throws SQLException
    {

        Connection connection = null;

        try
        {

            Class.forName(DB_DRIVER);
        }
        catch (ClassNotFoundException exception)
        {

            logger.log(Level.SEVERE, exception.getMessage());
        }

        try
        {

            connection = DriverManager.getConnection(databaseURL);

            return connection;
        }
        catch (SQLException exception)
        {

            logger.log(Level.SEVERE, exception.getMessage());
        }

        return connection;
    }
}