// Edwin Villanueva 
// COP2000
// October 21 2020
#include <iostream>
#include <iomanip>
using namespace std;

//Function Prototyping
void outputLogo();//Output your store logo
int selectStore();//Output the menu to select the store and return the user input
double getItem(string itemName, double price); //returns total of item ordered and function is sent item name and price
//finalTotal does not return a value but receives all the items for a store plus the total
//total is passed by reference hence it is updated in main
void finalTotal(double item1, double item2, double item3, double item4, double item5, double item6, double item7, double item8, double& total);




int main()
{
	//A.Define variables for all items and initialize values
	double apple = 2.00, pumpkin = 4.00, sausage = 3.00, bun = 1.00, membership = 5.00;
	double nuggies = 5.50, oranges = 2.00, cookies = 1.00, sushi = 7.00;
	string product;

	

	//B. Define variables for total, tax, discount and any additional variables for calculations or input
	double tax = 0.07;
	double totalTax;
	double grandTotal;

	int inApple{}, inPumpkin{}, inSausage{}, inBun{}, inMembership{};
	double totalApple, totalPumpkin, totalSausage, totalBun, totalMembership, totalTotals;

	int store;
	int student;
	double studentDiscount = 0.10;
	double studentTotal;
	double discountTotal;

	int inNuggies, inOranges, inCookies, inSushi;
	double totalNuggies, totalOranges, totalCookies, totalSushi, totalTotals2;

	//C.Output the logo
	outputLogo();

	//start a loop (do this last)

	//D. Output menu for store option
	// cout << "1		Shop our local store in Port Saint Lucie" << endl;
	// cout << "2		Shop our new store in Naples" << endl;
	// cout << "3		Exit Program" << endl;

	//E.Read input from user(store menu)
	//cin >> store;
	//F. Validate menu Input (use switch or if statements) � value must be 1-3 or print error message



	selectStore();


		//a. if the menu input item is 1 � Local Store - then


	//if (store == 3)
	//{
		//cout << "Thank you for choosing us! Have a wonderful day!! :D\n";
		//return 0;
	//}

	//do
	{
		//i. Output store item menu
		cout << "      Here are the choices we have available" << endl;
		cout << " " << endl;
		cout << "Apple Pie				        $2.00" << endl;
		cout << "Pumpkin Pie			                $4.00" << endl;
		cout << "A Singular Sausage. No Bun.	                $3.00 " << endl;
		cout << "The Bun                                         $1.00" << endl;
		cout << " " << endl;
		cout << "***************************************************************" << endl;

		









		totalApple = getItem("Apple Pies", apple);
		totalPumpkin = getItem("Pumpkin Pies", pumpkin);
		totalSausage = getItem("Sausages", sausage);
		totalBun = getItem("Buns", bun);
		totalMembership = getItem("Loyalty Memberships", membership);









		//iv. Validate user input 
		
		while (inApple < 0)
		{
			//a. if value is less than zero set to zero and output message error message
			cout << "We cannot sell a negative amount of products, please try again..." << endl;
			cout << "Thank you for understanding!" << endl;

			// read user input	
			cin >> inApple;

		}

	

		//vii.Validate user input
		while (inPumpkin < 0)
		{
			//a. if value is less than zero set to zero and output message error message
			cout << "We cannot sell a negative amount of products, please try again..." << endl;
			cout << "Thank you for understanding!" << endl;

			//read user input
			cin >> inPumpkin;

		}
		//viii. Ask the user for the total number of the third item desired. 
		//cout << "How many sausages..? ";
		//ix. Read in the input from the user 
		//cin >> inSausage;
		//x. Validate user input 
		while (inSausage < 0)
		{
			//a. if value is less than zero set to zero and output message error message
			cout << "We cannot sell a negative amount of products, please try again..." << endl;
			cout << "Thank you for understanding!" << endl;

			//read user input
			cin >> inSausage;

		}
		//xi. Ask the user for the total number of the fourth item desired. 
		//cout << "Okay... how many buns do you want with those? ";
		//xii. Read in the input from the user 
		//cin >> inBun;
		//xiii. Validate user input 
		while (inBun < 0)
		{
			//a. if value is less than zero set to zero and output message error message
			cout << "We cannot sell a negative amount of products, please try again..." << endl;
			cout << "Thank you for understanding!" << endl;

			//read user input
			cin >> inBun;

		}
		//xiv. Ask the user for the total number of loyalty memberships desired 
		//cout << "Awesome! How many loyalty memberships would you be interested in today? ";
		//xv. Read in the input from the user. 
		//cin >> inMembership;
		//Validate user input 
		while (inMembership < 0)
		{
			//a. if value is less than zero set to zero and output message error message
			cout << "We cannot sell a negative amount of products, please try again..." << endl;
			cout << "Thank you for understanding!" << endl;

			//read user input
			cin >> inMembership;

		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		//xvi. Calculate the total for each item. 
		// totalApple = inApple * apple; // someTotal = itemIn * price
		//totalPumpkin = pumpkin * inPumpkin;
		//totalSausage = sausage * inSausage;
		//totalBun = bun * inBun;
		//totalMembership = membership * inMembership;

		
		
		
		
		
		
		
		
		
		
		
		
		//xvii. Calculate the total sales
		totalTotals = totalApple + totalPumpkin + totalSausage + totalBun + totalMembership;

		//xviii. Calculate the total tax
		//xix. Calculate the total sales with tax
		totalTax = totalTotals * tax;
		grandTotal = totalTax + totalTotals;

		//xx. Display the formatted output of each store item and the total for that item

		cout << "***************************************************************" << endl;
		cout << "restaurant items			Prices							" << endl;
		cout << "----------------			------							" << endl;
		cout << setprecision(2) << fixed;
		cout << "Apple Pies			 " << setw(8) << "$" << apple << setw(14) << "Total: $" << totalApple << endl;
		cout << "Pumpkin Pies		  	 " << setw(8) << "$" << pumpkin << setw(14) << "Total: $" << totalPumpkin << endl;
		cout << "Sausages			 " << setw(8) << "$" << sausage << setw(14) << "Total: $" << totalSausage << endl;
		cout << "Buns				 " << setw(8) << "$" << bun << setw(14) << "Total: $" << totalBun << endl;
		cout << "Membership			 " << setw(8) << "$" << membership << setw(14) << "Total: $" << totalMembership << endl;
		cout << "***************************************************************" << endl;

		//xxi. Display the Tax, Total Sales and the Total Sales with Tax (see sample output)
		cout << setw(0) << "Tax: $" << totalTax << "		Total: $" << totalTotals << "		Total w/ tax: $" << grandTotal << endl;

		//xxii. Ask the user if they are a student
		cout << "Are you a student?		1. Yes		2. No" << endl;

		//xxiii. Read in input
		cin >> student;

		//xxiv. if input is 1 then
		if (student == 1)
		{
			discountTotal = grandTotal * studentDiscount;
			studentTotal = grandTotal - discountTotal;

			//a. Output �You are eligible for our 10% discount!!�
			cout << "You are eligible for our 10% discount!" << endl;

			//b.Calculate 10 % discount
			//c. Output Discount, Total Sales with Tax, Total Sales with Tax minus the Discount
			cout << "Discount: $" << discountTotal << "					Total: $" << studentTotal << endl;
		}
		// i know this part was not necessary but i did it anyway XD
		if (student == 2)



			while (student >= 3)
			{
				cout << "You are either a student or not a student. Please let us know which one applies. \n";
				cin >> student;
			}

		while (student <= 0)
		{
			cout << "You are either a student or not a student. Please let us know which one applies. \n";
			cin >> student;
		}

		cout << "Thank you for shopping with us! Is there anything else you would like to do?" << endl;
		cout << "1		Shop our local store in Port Saint Lucie" << endl;
		cout << "2		Shop our new store in Naples" << endl;
		cout << "3		Exit Program" << endl;

		//E.Read input from user(store menu)
		cin >> store;
		//F. Validate menu Input (use switch or if statements) � value must be 1-3 or print error message

		if (store == 3)
		{
			cout << "Thank you for choosing us! Have a wonderful day!! :D\n";
			return 0;
		}


	} while (store == 1);



	//SAME CODE FOR BOTH STORES, DIFFERENT PRODUCTS
	do
	{
		cout << "      Here are the choices we have available" << endl;
		cout << " " << endl;
		cout << "Nuggies				        $5.00" << endl;
		cout << "Oranges			                $2.00" << endl;
		cout << "Cookies					$1.00 " << endl;
		cout << "Sushi                                   $7.00" << endl;
		cout << " " << endl;
		cout << "***************************************************************" << endl;

		//D.Ask the user for the total number of the first item desired.
		//cout << "How many packs o' Nuggies were you thinking of buying today? ";
		//E.Read in the input from the user.
		//cin >> inNuggies;
		










		totalNuggies = getItem("Nuggies", nuggies);
		totalOranges = getItem("Oranges", oranges);
		totalCookies = getItem("Cookies", cookies);
		totalSushi = getItem("Sushi", sushi);
		totalMembership = getItem("Loyalty Memberships", membership);










	
		//N.Calculate the total for each type of Item.
		//totalNuggies = nuggies * inNuggies; //some total equals product times input for that product
		//totalOranges = oranges * inOranges;
		//totalCookies = cookies * inCookies; //someTotal = price  * inItem
		//totalSushi = sushi * inSushi;
		//totalMembership = membership * inMembership;

		//O.Calculate the overall sales total.
		totalTotals2 = totalNuggies + totalOranges + totalCookies + totalSushi + totalMembership;

		totalTax = totalTotals2 * tax;
		grandTotal = totalTax + totalTotals2;

		//P.Display the formatted output of each of type of sale item and the total sales

		cout << "***************************************************************" << endl;
		cout << "restaurant items			Prices							" << endl;
		cout << "----------------			------							" << endl;
		cout << setprecision(2) << fixed;
		cout << "Nuggies				 " << setw(8) << "$" << nuggies << setw(14) << "Total: $" << totalNuggies << endl;
		cout << "Oranges		  		 " << setw(8) << "$" << oranges << setw(14) << "Total: $" << totalOranges << endl;
		cout << "Cookies				 " << setw(8) << "$" << cookies << setw(14) << "Total: $" << totalCookies << endl;
		cout << "Sushi				 " << setw(8) << "$" << sushi << setw(14) << "Total: $" << totalSushi << endl;
		cout << "Membership			 " << setw(8) << "$" << membership << setw(14) << "Total: $" << totalMembership << endl;
		cout << "***************************************************************" << endl;
		cout << setw(0) << "Tax: $" << totalTax << "		Total: $" << totalTotals2 << "		Total w/ tax: $" << grandTotal << endl;
		cout << "Are you a student?		1. Yes		2. No" << endl;
		cin >> student;
		if (student == 1)
		{
			discountTotal = grandTotal * studentDiscount;
			studentTotal = grandTotal - discountTotal;

			cout << "You are eligible for a 10% discount!" << endl;
			cout << "Discount: $" << discountTotal << "					Total: $" << studentTotal << endl;
		}


		if (student == 2)



			cout << "1		Shop our local store in Port Saint Lucie" << endl;
		cout << "2		Shop our new store in Naples" << endl;
		cout << "3		Exit Program" << endl;

		//E.Read input from user(store menu)
		cin >> store;
		//F. Validate menu Input (use switch or if statements) � value must be 1-3 or print error message

		if (store == 3)
		{
			cout << "Thank you for choosing us! Have a wonderful day!! :D\n";
			return 0;
		}

		while (student >= 3)
		{
			cout << "You are either a student or not a student. Please let us know which one applies. \n";
			cin >> student;
		}

		while (student <= 0)
		{
			cout << "You are either a student or not a student. Please let us know which one applies. \n";
			cin >> student;
		}

	} while (store == 2);

	return 0;


}

//Function Dfeinition (has to come outside of main)
void outputLogo()
{
	//C.Output the logo
	cout << "     Edwin Villanueva: the restaurant (ending all famine)" << endl;
	cout << " " << endl;
	cout << "***************************************************************" << endl;
	cout << "***************************************************************" << endl;
	cout << "************                                     **************" << endl;
	cout << "************   ******  ****    ****    ****      **************" << endl;
	cout << "************   *      *    *  *    *   *   **    **************" << endl;
	cout << "************   ****   *    *  *    *   *    *    **************" << endl;
	cout << "************   *      *    *  *    *   *   **    **************" << endl;
	cout << "************   *       ****    ****    ****      **************" << endl;
	cout << "************                                     **************" << endl;
	cout << "***************************************************************" << endl;
	cout << "***************************************************************" << endl;
	cout << " " << endl;
}

double getItem(string itemName, double price)
{
	int product;
	double someTotal;
	// ask the user for the items of itemName that they wish to order
	cout << "How many \"itemName\" would you like? ";
	
	//read in order number 
	cin >> product;

	//perform calculation for total cost
	someTotal = product * price;
	//return total cost
	return someTotal;
}


int selectStore()
{

	int menuOption;
	//put all your code here


		//D. Output menu for store option
	cout << "1		Shop our local store in Port Saint Lucie" << endl;
	cout << "2		Shop our new store in Naples" << endl;
	cout << "3		Exit Program" << endl;

	//E.Read input from user(store menu)
	cin >> menuOption;
	//F. Validate menu Input (use switch or if statements) � value must be 1-3 or print error message


		//a. if the menu input item is 1 � Local Store - then


	if (menuOption == 3)
	{
		cout << "Thank you for choosing us! Have a wonderful day!! :D\n";
		return 0;
	}

		return menuOption;

}

void finalTotal(double apple, double pumpkin, double sausage, double bun, double membership, double nuggies, double oranges, double cookies, double sushi, double totalTotals, double totalTotals2)
{
	//double totalApple, totalPumpkin, totalSausage, totalBun, totalMembership, totalNuggies, totalOranges, totalCookies, totalSushi;
	//totalTotals = totalApple + totalPumpkin + totalSausage + totalBun + totalMembership;
	//totalTotals2 = totalNuggies + totalOranges + totalCookies + totalSushi + totalMembership;
}