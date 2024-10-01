<?php 
// user input
$name = $_POST["name"];
$email = $_POST["email"];
$nation = $_POST["nation"];
$number = $_POST["number"];
$gender = $_POST["gender"];

// db connection
$sname = "localhost";
$uname = "root";
$pass = "";
$db = "Customer_DB";
$conn = mysqli_connect($sname , $uname ,$pass, $db);

if(! $conn){
    die("Connection error");
};

// table creation
$tab = "CREATE TABLE customer_table
(
CustID int UNSIGNED AUTO_INCREMENT PRIMARY KEY,
CustName varchar(255),
Email varchar(100),
Nationality varchar(255),
Pnumber VARCHAR(10),
Gender VARCHAR(10)
)";
mysqli_query($conn , $tab);

// insert data
$datainsert = "INSERT INTO customer_table (CustName, Email , Nationality ,Pnumber ,Gender)
               VALUES ('$name', '$email', '$nation' , '$number' ,'$gender');";
mysqli_query($conn , $datainsert);

// show data
$showdata = "SELECT CustID, CustName, Email , Nationality ,Pnumber , Gender FROM customer_table";
$result = $conn->query($showdata);
 
// display data on screen
if ($result->num_rows > 0) {
    // output data of each row
    while($row = $result->fetch_assoc()) {
        echo "<br> 
        id: ". $row["CustID"]. " -----  Name : ". $row["CustName"]. " ------- Email : " . $row["Email"] .  " ------ Nationality : " . $row["Nationality"] ."----- PhoneNuumber : ".$row["Pnumber"] . "---- Gender : ".$row["Gender"].
        
        "<br>";
    }
} else {
    echo "No result";
}

mysqli_close($conn);
?>