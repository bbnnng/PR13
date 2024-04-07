#pragma once
#include <vector>
#include <string>
#include <cmath>
#include <fstream>
#include <vector>
#include <fstream>
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace pr13kakaha 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	struct Circle
	{
		int radius;
		int centerX;
		int centerY;
	};

	struct Point {
		int x;
		int y;
	};


	int checkIntersection(const Circle& circle1, const Circle& circle2) {
		int distance = static_cast<int>(std::sqrt(
			std::pow(circle2.centerX - circle1.centerX, 2) +
			std::pow(circle2.centerY - circle1.centerY, 2)
		));
		return distance;
	}

	std::string getIntersectionStatus(int distance, int radius1, int radius2) {
		if (distance <= radius1 + radius2) {
			// Intersection exists
			if (distance == 0 && radius1 == radius2) {
				return "Circles coincide";
			}
			else {
				return "Circles intersect";
			}
		}
		else {
			return "Circles do not intersect";
		}
	}

	double getDistance(const Point& p1, const Point& p2) {
		double dx = p2.x - p1.x;
		double dy = p2.y - p1.y;
		return sqrt(dx * dx + dy * dy);
	}

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"PR11_1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(86, 75);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(105, 36);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"PR11_2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(105, 65);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(301, 20);
			this->textBox2->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(170, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(55, 20);
			this->textBox3->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(231, 39);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(55, 20);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(290, 39);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(55, 20);
			this->textBox5->TabIndex = 6;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(351, 39);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(55, 20);
			this->textBox6->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(239, 117);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(167, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"PR11_3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(149, 91);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 20);
			this->textBox7->TabIndex = 9;
			this->textBox7->Text = L"x1";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(194, 91);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(39, 20);
			this->textBox8->TabIndex = 10;
			this->textBox8->Text = L"x2";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(104, 117);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(39, 20);
			this->textBox9->TabIndex = 11;
			this->textBox9->Text = L"rad2";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(149, 117);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(39, 20);
			this->textBox10->TabIndex = 12;
			this->textBox10->Text = L"y1";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(194, 117);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(39, 20);
			this->textBox11->TabIndex = 13;
			this->textBox11->Text = L"y2";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(104, 91);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(39, 20);
			this->textBox12->TabIndex = 14;
			this->textBox12->Tag = L"";
			this->textBox12->Text = L"rad1";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(239, 91);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(167, 20);
			this->textBox13->TabIndex = 15;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 49);
			this->button4->TabIndex = 16;
			this->button4->Text = L"PR12_2";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(19, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"PR11";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 140);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 18;
			this->label2->Text = L"PR12";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(104, 156);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(86, 20);
			this->textBox14->TabIndex = 19;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(104, 185);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(86, 20);
			this->textBox15->TabIndex = 20;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(196, 156);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 49);
			this->button5->TabIndex = 21;
			this->button5->Text = L"PR12_4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(301, 156);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(105, 49);
			this->button6->TabIndex = 22;
			this->button6->Text = L"PR12_9";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(420, 294);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = "";

		// Створення матриці 3x3
		int matrix[3][3] = {
		  {1, 2, 3},
		  {4, 5, 6},
		  {7, 8, 9}
		};

		// Виведення матриці в текстове поле
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				textBox1->Text += matrix[i][j];
				textBox1->Text += " ";
			}
			textBox1->Text += "\r\n";
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
		   double getDistance(const Point& p1, const Point& p2) {
			   double dx = p2.x - p1.x;
			   double dy = p2.y - p1.y;
			   return sqrt(dx * dx + dy * dy);
		   }

		   void CalculateDistance(Point p1, Point p2, System::Windows::Forms::TextBox^ textBox1) {
			   double distance = getDistance(p1, p2);
			   textBox1->Text = distance.ToString();
		   }
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		double x1 = System::Convert::ToDouble(textBox3->Text);
		double y1 = System::Convert::ToDouble(textBox4->Text);
		double x2 = System::Convert::ToDouble(textBox5->Text);
		double y2 = System::Convert::ToDouble(textBox6->Text);
		// Создать экземпляры структуры Point
		Point p1 = { x1, y1 };
		Point p2 = { x2, y2 };

		// Вычислить расстояние
		double distance = getDistance(p1, p2);

		// Преобразовать расстояние в строку
		String^ distanceStr = distance.ToString();

		// Вывести результат в textBox1
		textBox2->Text = distanceStr;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int radius1 = System::Convert::ToInt32(textBox12->Text);
		int centerX1 = System::Convert::ToInt32(textBox7->Text);
		int centerY1 = System::Convert::ToInt32(textBox10->Text);
		int radius2 = System::Convert::ToInt32(textBox9->Text);
		int centerX2 = System::Convert::ToInt32(textBox8->Text);
		int centerY2 = System::Convert::ToInt32(textBox11->Text);
		Circle circle1;
		circle1.radius = radius1;
		circle1.centerX = centerX1;
		circle1.centerY = centerY1;

		Circle circle2;
		circle2.radius = radius2;
		circle2.centerX = centerX2;
		circle2.centerY = centerY2;



		int distance = checkIntersection(circle1, circle2);

		// Определить статус пересечения
		wchar_t buffer[64];
		if (distance <= radius1 + radius2) {
			if (distance == 0 && radius1 == radius2) {
				swprintf_s(buffer, 64, L"Круги совпадают");
			}
			else {
				swprintf_s(buffer, 64, L"Круги пересекаются");
			}
		}
		else {
			swprintf_s(buffer, 64, L"Круги не пересекаются");
		}

		textBox13->Text = gcnew String(buffer);
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int numConstants = Convert::ToInt32(textBox14->Text);
		std::vector<int> constants;

		String^ constantsInput = textBox15->Text;
		array<wchar_t>^ delimiters = { ' ' };
		array<String^>^ constantsArray = constantsInput->Split(delimiters);

		for each (String ^ constantStr in constantsArray)
		{
			int constant = Convert::ToInt32(constantStr);
			constants.push_back(constant);
		}

		std::ofstream outputFile("constants.txt");
		if (!outputFile)
		{
			MessageBox::Show("Failed to create/open the file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		outputFile << numConstants << std::endl;

		for (int i = 0; i < numConstants; ++i)
		{
			outputFile << constants[i];
			if (i != numConstants - 1)
			{
				outputFile << " ";
			}
		}

		outputFile.close();

		MessageBox::Show("Constants have been written to constants.txt", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream inputFile("input.txt");
		if (!inputFile) {
			MessageBox::Show("Failed to open the input file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::vector<double> sequence;
		double num;
		while (inputFile >> num) {
			sequence.push_back(num);
		}
		inputFile.close();

		std::ofstream outputFile("output.txt");
		if (!outputFile) {
			MessageBox::Show("Failed to create/open the output file.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (sequence.size() == 1) {
			outputFile << sequence[0] << std::endl;
			MessageBox::Show("Sequence has been smoothed and written to output.txt", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		for (size_t i = 0; i < sequence.size() - 1; ++i) {
			double smoothed = (sequence[i] + sequence[i + 1]) / 2.0;
			outputFile << smoothed << " ";
		}
		outputFile << std::endl;

		outputFile.close();
		MessageBox::Show("Sequence has been smoothed and written to output.txt", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Open an input file (replace "input.txt" with your filename)
		std::ifstream inputFile("input.txt");

		// Check if file opened successfully
		if (inputFile.is_open()) {
			std::string content;
			std::string line;

			// Read file line by line
			while (std::getline(inputFile, line)) {
				// Remove newline characters and append to content
				line.erase(std::remove(line.begin(), line.end(), '\n'), line.end());
				content.append(line + " ");  // Add space after each line
			}

			// Open an output file
			std::ofstream outputFile("output.txt");
			if (outputFile.is_open()) {
				// Write the processed content to the output file
				outputFile << content;
				outputFile.close();

				MessageBox::Show("File processed and output saved to output.txt");
			}
			else {
				MessageBox::Show("Error creating/opening output file!");
			}

			inputFile.close();
		}
		else {
			// Handle file opening error
			MessageBox::Show("Error opening input file!");
		}
	}
	};
}