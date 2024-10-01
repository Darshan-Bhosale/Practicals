#5a. Class: Write a program using class to simulate Banking.

class simulate_Banking:
    def pinfo(self):
        self.balance=1000000
        self.Name="Darshan"
        self.AccNbr="014210110008989"
        print("Hello!!! Welcome to the Deposit & Withdrawal Machine")
        print("Name:",self.Name)
        print("Account Number:",self.AccNbr)
        print("Balance:",self.balance)

    def deposit(self):
        amount=float(input("\nEnter amount to be Deposited: "))
        self.balance += amount
        print("Amount Deposited:",amount)
        print("Available Balance=",self.balance)
 
    def withdraw(self):
        amount = float(input("\nEnter amount to be Withdrawn: "))
        if self.balance>=amount:
            self.balance-=amount
            print("\nYou Withdrew:", amount)
        else:
            print("\nInsufficient balance  ")
 
    def checkBalance(self):
        print("\nNet Available Balance=",self.balance)

s = simulate_Banking()
s.pinfo()
s.deposit()
s.withdraw()
s.checkBalance()
