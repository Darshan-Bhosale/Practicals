<?php
$acc_number = $_POST["acc_number"];

// db connection
$sname = "localhost";
$uname = "root";
$pass = "";
$db = "account_bank";
$conn = mysqli_connect($sname , $uname ,$pass, $db);

if(! $conn){
    die("Connection error");
}; 

// show data 
$showdata = "SELECT * FROM account_details WHERE account_number=$acc_number ";
$result = $conn->query($showdata);

// display data on screen
if ($result->num_rows > 0) {
    while($row = $result->fetch_assoc()) {
        echo "<br> 
        id: ". $row["id"]. "<br> --  Account Holder : ". $row["account_holder"]  . "<br> -- Phone number : " . $row["phone"] .  " <br>-- Email : " . $row["email"] ."<br>-- State : ".$row["state"] . "<br>-- IFSC CODE : ".$row["ifsc_code"] . "<br>-- Account type :" .$row["acc_type"] . "<br>-- Bank Name : " .$row["bank_name"] . "<br>-- Balance : " .$row["balance"]   . "<br>-- Last Transaction : " . $row["last_transaction"] ;
    };
} else {
    echo "No result";
}

mysqli_close($conn);

?>