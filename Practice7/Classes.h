#pragma once

using namespace System;
public ref class Product {
public:
	String^ productCategory;
	String^ productType;
	String^ productName;
	double weight;
	double price;

	Product(void);
	Product(String ^, String^, String^);
	Product(String^, String^, String^, double);
	Product(Product^);

	void Product::countprice(int, int);
};

Product::Product(void) {
	this->productCategory = gcnew String("");
	this->productType = gcnew String("");
	this->productName = gcnew String("");
	this->price = 0;
	this->weight = 0;
}

Product::Product(Product^ p) {
	this->productCategory = p->productCategory;
	this->productType = p->productType;
	this->productName = p->productName;
	this->weight = p->weight;
	this->price = p->price;
}

Product::Product(String^ category, String^ type, String^ name) {
	this->productCategory = gcnew String(category);
	this->productType = gcnew String(type);
	this->productName = gcnew String(name);
	this->weight = 0;
	this->price = 0;
}

Product::Product(String^ category, String^ type, String^ name, double w) {
	this->productCategory = gcnew String(category);
	this->productType = gcnew String(type);
	this->productName = gcnew String(name);
	this->weight = w;
	this->price = 0;
}


public ref class Loan {
public:
	String^ customerName;
	String^ customerNumber;
	Product^ product;
	DateTime date;
	double loan;
	int days;

	Loan(void);
	Loan(String^, String^, Product ^, DateTime, int);
	Loan(Loan^);

	double loanExtension(int);
};

Loan::Loan(void) {
	this->customerName = gcnew String("");
	this->customerNumber = gcnew String("");
	this->product = gcnew Product();
	this->loan = 0;
	this->days = 0;
}

Loan::Loan(String^ name, String^ number, Product ^ p, DateTime dt, int d) {
	this->customerName = gcnew String(name);
	this->customerNumber = gcnew String(number);
	this->product = gcnew Product(p);
	this->days = d;
	this->date = dt;
	this->loan = 0.01 * this->product->price * this->days + this->product->price;
}

Loan::Loan(Loan^ l) {
	
}

void Product::countprice(int indexC, int indexT) {
	switch (indexC) {
	case 0:
		switch (indexT) {
		case 0:
			this->price = 2580 * this->weight;
			break;
		case 1:
			this->price = 1650 * this->weight;
			break;
		case 2:
			this->price = 2320 * this->weight;
			break;
		case 3:
			this->price = 2750 * this->weight;
			break;
		case 4:
			this->price = 2670 * this->weight;
			break;
		case 5:
			this->price = 2720 * this->weight;
			break;
		}
		break;
	case 1:
		this->price = 80 * this->weight;
		break;
	case 2:
		switch (indexT) {
		case 0: 
			this->price = 7568; 
			break;
		case 1: 
			this->price = 15320;
			break;
		case 2: 
			this->price = 9685; 
			break;
		case 3: 
			this->price = 11362; 
			break;
		}
		break;
	}
}

double Loan::loanExtension(int d) {
	return 0.043 * this->loan * d + this->loan;
}

int CompareByDate(Loan^ one, Loan^ two) {
	if (one->date.AddDays(one->days) == two->date.AddDays(two->days)) {
		if (one->loan > two->loan)
			return 1;
		else 
			return -1;
	}
	else {
		if (one->date.AddDays(one->days) > two->date.AddDays(two->days))
			return 1;
		else
			return -1;
	}
}

void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <Loan^>^ LIST, System::Collections::Generic::Queue <Loan^>^ QUEUE) {
	String^ str = gcnew String("");
	while (str = SR->ReadLine()) {
		try {
			Loan^ p = gcnew Loan();
			p->customerName = str->Substring(0, str->IndexOf("$"));
			p->customerNumber = str->Substring(str->IndexOf("$") + 1, str->IndexOf("#") - str->IndexOf("$") - 1);
			p->product->productCategory = str->Substring(str->IndexOf("#") + 1, str->IndexOf("!") - str->IndexOf("#") - 1);
			p->product->productType = str->Substring(str->IndexOf("!") + 1, str->IndexOf("%") - str->IndexOf("!") - 1);
			p->product->productName = str->Substring(str->IndexOf("%") + 1, str->IndexOf("*") - str->IndexOf("%") - 1);
			p->loan = Convert::ToDouble(str->Substring(str->IndexOf("*") + 1, str->IndexOf("=") - str->IndexOf("*") - 1));
			p->date = Convert::ToDateTime(str->Substring(str->IndexOf("=") + 1, str->IndexOf("+") - str->IndexOf("=") - 1));
			p->days = Convert::ToInt16(str->Substring(str->IndexOf("+") + 1, str->IndexOf("¹") - str->IndexOf("+") - 1));
			p->product->weight = Convert::ToDouble(str->Substring(str->IndexOf("¹") + 1, str->IndexOf("&") - str->IndexOf("¹") - 1));;
			p->product->price = Convert::ToDouble(str->Substring(str->IndexOf("&") + 1));
			LIST->Add(p);
			QUEUE->Enqueue(p);
		}
		catch (...) {
			break;
		}

	}
	SR->Close();
}

void readFromFile(System::IO::StreamReader^ SR, System::Collections::Generic::List <Product^>^ LIST) {
	String^ str = gcnew String("");
	while (str = SR->ReadLine()) {
		try {
			Product^ p = gcnew Product();
			p->productCategory = str->Substring(0, str->IndexOf("$"));
			p->productType = str->Substring(str->IndexOf("$") + 1, str->IndexOf("#") - str->IndexOf("$") - 1);
			p->productName = str->Substring(str->IndexOf("#") + 1, str->IndexOf("*") - str->IndexOf("#") - 1);
			p->price = Convert::ToDouble(str->Substring(str->IndexOf("*") + 1));
			LIST->Add(p);
		}
		catch (...) {
			break;
		}

	}
	SR->Close();
}

void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <Loan^>^ LIST) {
	for each (Loan ^ el in LIST) {
		SW->WriteLine(String::Format("{0}${1}#{2}!{3}%{4}*{5}={6}+{7}¹{8}&{9}", 
			el->customerName, el->customerNumber, el->product->productCategory,el->product->productType, el->product->productName, el->loan, el->date, el->days, el->product->weight, el->product->price));
	}
	SW->Close();
}

void writeToFile(System::IO::StreamWriter^ SW, System::Collections::Generic::List <Product^>^ LIST) {
	for each (Product ^ p in LIST) {
		SW->WriteLine(String::Format("{0}${1}#{2}*{3}",p->productCategory,p->productType, p->productName, p->price));
	}
	SW->Close();
}