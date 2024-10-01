/* Program to determine salvage value */

class P14
{
public static void main(String args[])
	{
double purchase_price, salvage_value,depreciation;		int years_of_service;
purchase_price = 250;
years_of_service = 5;
depreciation = 30;

(salvage_value)= -(depreciation*years_of_service-purchase_price);
System.out.println(" salvage value ="+salvage_value);

	}
}