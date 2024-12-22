#pragma once
#include "Resource.h"
#include "Process.h"
#include <cstdlib> // srand ve rand için
#include <ctime>   // time için
#include <cmath>
#include <vector>


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Size = Size1 = Size2 = Size3 = Size4 = Size5 = 0;
			currentClass = 1;
			classCount = 0;

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ processToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ initialsToolStripMenuItem;





	private:
		/// <summary>
		/// Required designer variable.
		Samples* p;
		int Size, Size1, Size2, Size3, Size4, Size5;
		double* w;
		int currentClass;
		int classCount;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolStripMenuItem^ randomizeToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^ deltaLearningToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ trainToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label3;




		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->processToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->initialsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->randomizeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->deltaLearningToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->trainToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			   this->pictureBox1->Location = System::Drawing::Point(12, 27);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(808, 597);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox1_Paint);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::pictureBox1_MouseClick);
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->processToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(1362, 28);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // processToolStripMenuItem
			   // 
			   this->processToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->initialsToolStripMenuItem,
					   this->deltaLearningToolStripMenuItem, this->trainToolStripMenuItem
			   });
			   this->processToolStripMenuItem->Name = L"processToolStripMenuItem";
			   this->processToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			   this->processToolStripMenuItem->Text = L"Process";
			   // 
			   // initialsToolStripMenuItem
			   // 
			   this->initialsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->randomizeToolStripMenuItem });
			   this->initialsToolStripMenuItem->Name = L"initialsToolStripMenuItem";
			   this->initialsToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			   this->initialsToolStripMenuItem->Text = L"initials";
			   // 
			   // randomizeToolStripMenuItem
			   // 
			   this->randomizeToolStripMenuItem->Name = L"randomizeToolStripMenuItem";
			   this->randomizeToolStripMenuItem->Size = System::Drawing::Size(167, 26);
			   this->randomizeToolStripMenuItem->Text = L"Randomize";
			   this->randomizeToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::randomizeToolStripMenuItem_Click_1);
			   // 
			   // deltaLearningToolStripMenuItem
			   // 
			   this->deltaLearningToolStripMenuItem->Name = L"deltaLearningToolStripMenuItem";
			   this->deltaLearningToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			   this->deltaLearningToolStripMenuItem->Text = L"Delta Learning";
			   this->deltaLearningToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::deltaLearningToolStripMenuItem_Click);
			   // 
			   // trainToolStripMenuItem
			   // 
			   this->trainToolStripMenuItem->Name = L"trainToolStripMenuItem";
			   this->trainToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			   this->trainToolStripMenuItem->Text = L"Train";
			   this->trainToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::trainToolStripMenuItem_Click);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(839, 244);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(44, 16);
			   this->label1->TabIndex = 5;
			   this->label1->Text = L"label1";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(839, 427);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(44, 16);
			   this->label2->TabIndex = 7;
			   this->label2->Text = L"label2";
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->Location = System::Drawing::Point(1142, 61);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			   this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			   this->numericUpDown1->TabIndex = 11;
			   this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Form1::numericUpDown1_ValueChanged);
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(839, 67);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(78, 16);
			   this->label3->TabIndex = 12;
			   this->label3->Text = L"Class Label";
			   // 
			   // Form1
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1362, 636);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->numericUpDown1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"Form1";
			   this->Text = L"Form1";
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion




	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black, 2.0f);

		int centerX, centerY;
		centerX = (int)(pictureBox1->Width / 2);
		centerY = (int)(pictureBox1->Height / 2);
		e->Graphics->DrawLine(pen, centerX, 0, centerX, pictureBox1->Height);
		e->Graphics->DrawLine(pen, 0, centerY, pictureBox1->Width, centerY);

	}




	private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (currentClass == 1) {
			Pen^ pen = gcnew Pen(Color::Pink, 3.0f);
			int temp_X, temp_Y;
			double x1, x2;
			temp_X = (Convert::ToInt32(e->X));                 //pictureBox merkezi kaydýrýlýr
			temp_Y = (Convert::ToInt32(e->Y));                 //pictureBox merkezi kaydýrýlýr
			x1 = (double)(temp_X - (pictureBox1->Width >> 1));
			x2 = (double)((pictureBox1->Height >> 1) - temp_Y);
			if (Size == 0) { Size = Size1 = 1; p = new Samples[1]; p[0].x1 = x1; p[0].x2 = x2;  p[0].id = CLASS1; }
			else {
				Samples* temp;
				temp = p;
				if (Size1 == 0) {
					classCount++;
				}
				Size1++;
				Size++;
				p = new Samples[Size];
				for (int i = 0; i < Size - 1; i++) {
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}

				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = CLASS1;
				delete temp;
			}
			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X - 5, temp_Y, temp_X + 5, temp_Y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X, temp_Y - 5, temp_X, temp_Y + 5);

			label2->Text = "Samples Total: " + Convert::ToString(Size) + "  Class 1: " + Convert::ToString(Size1);
		}//CLASS1 ICIN

		if (currentClass == 2) {
			Pen^ pen = gcnew Pen(Color::Red, 3.0f);
			int temp_X, temp_Y;
			double x1, x2;
			temp_X = (Convert::ToInt32(e->X));                 //pictureBox merkezi kaydýrýlýr
			temp_Y = (Convert::ToInt32(e->Y));                 //pictureBox merkezi kaydýrýlýr
			x1 = (double)(temp_X - (pictureBox1->Width >> 1));
			x2 = (double)((pictureBox1->Height >> 1) - temp_Y);
			if (Size == 0) { Size = Size2 = 1; p = new Samples[1]; p[0].x1 = x1; p[0].x2 = x2;  p[0].id = CLASS2; }
			else {
				Samples* temp;
				temp = p;
				if (Size2 == 0) {
					classCount++;
				}
				Size2++;
				Size++;
				p = new Samples[Size];
				for (int i = 0; i < Size - 1; i++) {
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}

				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = CLASS2;
				delete temp;
			}
			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X - 5, temp_Y, temp_X + 5, temp_Y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X, temp_Y - 5, temp_X, temp_Y + 5);

			label2->Text = "Samples Total: " + Convert::ToString(Size) + "  Class 2: " + Convert::ToString(Size2);
		}// CLASS2 ICIN

		if (currentClass == 3) {
			Pen^ pen = gcnew Pen(Color::Blue, 3.0f);
			int temp_X, temp_Y;
			double x1, x2;
			temp_X = (Convert::ToInt32(e->X));                 //pictureBox merkezi kaydýrýlýr
			temp_Y = (Convert::ToInt32(e->Y));                 //pictureBox merkezi kaydýrýlýr
			x1 = (double)(temp_X - (pictureBox1->Width >> 1));
			x2 = (double)((pictureBox1->Height >> 1) - temp_Y);
			if (Size == 0) { Size = Size3 = 1; p = new Samples[1]; p[0].x1 = x1; p[0].x2 = x2;  p[0].id = CLASS3; }
			else {
				Samples* temp;
				temp = p;
				if (Size3 == 0) {
					classCount++;
				}
				Size3++;
				Size++;
				p = new Samples[Size];
				for (int i = 0; i < Size - 1; i++) {
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}

				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = CLASS3;
				delete temp;
			}
			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X - 5, temp_Y, temp_X + 5, temp_Y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X, temp_Y - 5, temp_X, temp_Y + 5);

			label2->Text = "Samples Total: " + Convert::ToString(Size) + "  Class 3: " + Convert::ToString(Size2);
		}// CLASS3 ICIN

		if (currentClass == 4) {
			Pen^ pen = gcnew Pen(Color::Green, 3.0f);
			int temp_X, temp_Y;
			double x1, x2;
			temp_X = (Convert::ToInt32(e->X));                 //pictureBox merkezi kaydýrýlýr
			temp_Y = (Convert::ToInt32(e->Y));                 //pictureBox merkezi kaydýrýlýr
			x1 = (double)(temp_X - (pictureBox1->Width >> 1));
			x2 = (double)((pictureBox1->Height >> 1) - temp_Y);
			if (Size == 0) { Size = Size4 = 1; p = new Samples[1]; p[0].x1 = x1; p[0].x2 = x2;  p[0].id = CLASS4; }
			else {
				Samples* temp;
				temp = p;
				if (Size4 == 0) {
					classCount++;
				}
				Size4++;
				Size++;
				p = new Samples[Size];
				for (int i = 0; i < Size - 1; i++) {
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}

				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = CLASS4;
				delete temp;
			}
			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X - 5, temp_Y, temp_X + 5, temp_Y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X, temp_Y - 5, temp_X, temp_Y + 5);

			label2->Text = "Samples Total: " + Convert::ToString(Size) + "  Class 4: " + Convert::ToString(Size2);
		}// CLASS4 ICIN

		if (currentClass == 5) {
			Pen^ pen = gcnew Pen(Color::Orange, 3.0f);
			int temp_X, temp_Y;
			double x1, x2;
			temp_X = (Convert::ToInt32(e->X));                 //pictureBox merkezi kaydýrýlýr
			temp_Y = (Convert::ToInt32(e->Y));                 //pictureBox merkezi kaydýrýlýr
			x1 = (double)(temp_X - (pictureBox1->Width >> 1));
			x2 = (double)((pictureBox1->Height >> 1) - temp_Y);
			if (Size == 0) { Size = Size5 = 1; p = new Samples[1]; p[0].x1 = x1; p[0].x2 = x2;  p[0].id = CLASS5; }
			else {
				Samples* temp;
				temp = p;
				if (Size5 == 0) {
					classCount++;
				}
				Size5++;
				Size += Size5;
				p = new Samples[Size];
				for (int i = 0; i < Size - 1; i++) {
					p[i].x1 = temp[i].x1;
					p[i].x2 = temp[i].x2;
					p[i].id = temp[i].id;
				}

				p[Size - 1].x1 = x1;
				p[Size - 1].x2 = x2;
				p[Size - 1].id = CLASS5;
				delete temp;
			}
			label1->Text = "x1: " + Convert::ToString(p[Size - 1].x1) + "  x2: " + Convert::ToString(p[Size - 1].x2);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X - 5, temp_Y, temp_X + 5, temp_Y);
			pictureBox1->CreateGraphics()->DrawLine(pen, temp_X, temp_Y - 5, temp_X, temp_Y + 5);

			label2->Text = "Samples Total: " + Convert::ToString(Size) + "  Class 5: " + Convert::ToString(Size2);
		}// CLASS5 ICIN
	};

private: System::Void randomizeToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int Dim = 2; // Boyut
		Pen^ pen;
		for (int i = 0; i <= classCount; i++) {
			switch (i) {
			case 0:pen = gcnew Pen(Color::Pink, 3.0f); break;
			case 1:pen = gcnew Pen(Color::Red, 3.0f); break;
			case 2:pen = gcnew Pen(Color::Blue, 3.0f); break;
			case 3:pen = gcnew Pen(Color::Green, 3.0f); break;
			case 4:pen = gcnew Pen(Color::Orange, 3.0f); break;
			default: pen = gcnew Pen(Color::Gray, 3.0f); break; // Varsayýlan renk
			}
			// Rastgele aðýrlýk vektörünü oluþtur
			double* w = new double[Dim + 1];
			srand(time(0) + i); // Her iterasyonda farklý bir seed
			for (int j = 0; j < Dim + 1; j++) {
				w[j] = ((double)rand() / (RAND_MAX));
			}


			// Aðýrlýk vektörlerini göster
			label1->Text += "\nDoðru " + (i + 1) + ": w[0]: " + System::Convert::ToString(w[0]) +
				"  w[1]: " + System::Convert::ToString(w[1]) +
				"  w[2]: " + System::Convert::ToString(w[2]);

			// Doðrunun uç noktalarýný hesapla
			int min_x = (this->pictureBox1->Width) / -2;
			int min_y = YPoint(min_x, w);
			int max_x = (this->pictureBox1->Width) / 2;
			int max_y = YPoint(max_x, w);

			// Doðruyu çiz
			pictureBox1->CreateGraphics()->DrawLine(pen, (pictureBox1->Width / 2) + min_x, (pictureBox1->Height / 2) - min_y,
				(pictureBox1->Width / 2) + max_x, (pictureBox1->Height / 2) - max_y);
		}

		// Belleði temizle
		delete[] w;

};


private: System::Void deltaLearningToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int Dim = 2; // Özellik boyutu
		double eta = 0.1; // Öðrenme hýzý
		bool hasError = true;
		int epoch = 0;
		const int maxEpoch = 100000; // Maksimum tekrar sayýsý

		//int weightSize = classCount * (Dim + 1);
		//w = new double[weightSize];

		//// Aðýrlýklarýn baþlangýç deðerlerini ata
		//for (int i = 0; i < weightSize; i++) {
		//	w[i] = 0.1;
		//}

		//while (hasError && epoch < maxEpoch) {
		//	hasError = false;

		//	for (int i = 0; i < Size; i++) { // Tüm örnekler üzerinde dön
		//		std::vector<double> net(classCount, 0.0);
		//		std::vector<double> outputs(classCount, 0.0);

		//		for (int c = 0; c < classCount; c++) {
		//			// Net giriþ hesapla
		//			int baseIndex = c * (Dim + 1); // Sýnýfýn aðýrlýklarýnýn baþlangýç indeksi
		//			net[c] = w[baseIndex] + w[baseIndex + 1] * p[i].x1 + w[baseIndex + 2] * p[i].x2;
		//			outputs[c] = 1.0 / (1.0 + exp(-net[c])); // Sigmoid aktivasyon
		//		}

		//		// Hedef çýktý vektörü (one-hot encoding)
		//		std::vector<double> target(classCount, 0.0);
		//		target[p[i].id] = 1.0; // Örneðin sýnýfýna karþýlýk gelen hedefi 1 yap

		//		// Hata hesapla ve aðýrlýklarý güncelle
		//		for (int c = 0; c < classCount; c++) {
		//			double error = target[c] - outputs[c];
		//			if (std::abs(error) > 0.01) { // Eþik deðer
		//				hasError = true;

		//				// Aðýrlýk güncellemeleri
		//				int baseIndex = c * (Dim + 1); // Sýnýfýn aðýrlýklarýnýn baþlangýç indeksi
		//				w[baseIndex] += eta * error * outputs[c] * (1 - outputs[c]); // Bias
		//				w[baseIndex + 1] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x1;
		//				w[baseIndex + 2] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x2;
		//			}
		//		}
		//	}
		//	epoch++;
		//}

		// Aðýrlýk matrisi (her sýnýf için ayrý aðýrlýk vektörü)
		std::vector<std::vector<double>> weights(classCount, std::vector<double>(Dim + 1, 0.1)); // Baþlangýç aðýrlýklarý

		while (hasError && epoch < maxEpoch) {
			hasError = false;

			for (int i = 0; i < Size; i++) { // Tüm örnekler üzerinde dön
				/* Her sýnýf için net giriþ ve sigmoid çýktýlarý hesapla*/
				std::vector<double> net(classCount, 0.0);
				std::vector<double> outputs(classCount, 0.0);


				for (int c = 0; c < classCount; c++) {
					net[c] = weights[c][0] + weights[c][1] * p[i].x1 + weights[c][2] * p[i].x2;
					outputs[c] = 1.0 / (1.0 + exp(-net[c])); // Sigmoid aktivasyon
				}

				// Hedef çýktý vektörü (one-hot encoding)
				std::vector<double> target(classCount, 0.0);
				target[p[i].id] = 1.0; // Örneðin sýnýfýna karþýlýk gelen hedefi 1 yap

				// Hata hesapla ve aðýrlýklarý güncelle
				for (int c = 0; c < classCount; c++) {
					double error = target[c] - outputs[c];
					if (std::abs(error) > 0.01) { // Eþik deðer
						hasError = true;

						// Aðýrlýk güncellemeleri
						weights[c][0] += eta * error * outputs[c] * (1 - outputs[c]); // Bias
						weights[c][1] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x1;
						weights[c][2] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x2;
					}
				}
			}
			epoch++;
		}

		if (!hasError) {
			MessageBox::Show("Delta Learning (Sigmoid, Çoklu Sýnýf) tamamlandý! Epoch: " + epoch);
		}
		else {
			MessageBox::Show("Maksimum epoch sayýsýna ulaþýldý, öðrenme tamamlanamadý.");
		}

		// Karar sýnýrlarýný görselleþtirme
		DrawDecisionBoundaryLines(weights);
}


void DrawDecisionBoundaryLines(const std::vector<std::vector<double>>& weights) {
			   // Grafik boyutlarý (PictureBox veya benzeri bir kontrol için)
			   const int width = pictureBox1->Width;
			   const int height = pictureBox1->Height;

			   // Bitmap oluþtur
			   Bitmap^ bmp = gcnew Bitmap(width, height);

			   // Graphics nesnesi oluþtur
			   Graphics^ g = Graphics::FromImage(bmp);
			   g->Clear(Color::White); // Arka planý beyaz yap

			   // Her sýnýf çiftinin karar sýnýrlarýný çiz
			   for (int c1 = 0; c1 < weights.size(); c1++) {
				   for (int c2 = c1 + 1; c2 < weights.size(); c2++) {
					   // Ýki sýnýf arasýndaki karar sýnýrýný temsil eden denklem:
					   // w0 + w1*x1 + w2*x2 = 0
					   // Ýki sýnýfýn aðýrlýklarýný al
					   const auto& w1 = weights[c1];
					   const auto& w2 = weights[c2];

					   // Karar sýnýrý aðýrlýklarý
					   double a = w1[1] - w2[1];
					   double b = w1[2] - w2[2];
					   double c = w1[0] - w2[0];

					   // x1 = -1 ile x1 = 1 arasýnda x2 deðerlerini hesapla ve çiz
					   PointF p1, p2;
					   if (fabs(b) > 1e-6) {
						   // Sol kenar (x1 = -1)
						   double x1 = -1.0;
						   double x2 = -(a * x1 + c) / b;
						   p1 = PointF((x1 + 1.0f) * 0.5f * width, (1.0f - x2) * 0.5f * height);

						   // Sað kenar (x1 = 1)
						   x1 = 1.0;
						   x2 = -(a * x1 + c) / b;
						   p2 = PointF((x1 + 1.0f) * 0.5f * width, (1.0f - x2) * 0.5f * height);
					   }
					   else {
						   // Eðer b çok küçükse (yaklaþýk 0), dik bir çizgi çizeriz
						   double x1 = -c / a;
						   p1 = PointF((x1 + 1.0f) * 0.5f * width, 0);
						   p2 = PointF((x1 + 1.0f) * 0.5f * width, height);
					   }

					   Pen^ pen = gcnew Pen(Color::Black);
					   g->DrawLine(pen, p1, p2);
				   }
			   }

			   // Bitmap'i PictureBox üzerinde göster
			   pictureBox1->Image = bmp; 
}




private: System::Void trainToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int Dim = 2; // Özellik boyutu
		const int numClasses = 5; // Sýnýf sayýsý
		double eta = 0.1; // Öðrenme hýzý
		bool hasError = true;
		int epoch = 0;
		const int maxEpoch = 100000; // Maksimum tekrar sayýsý

		// Aðýrlýk matrisi (her sýnýf için ayrý aðýrlýk vektörü)
		std::vector<std::vector<double>> weights(numClasses, std::vector<double>(Dim + 1, 0.1)); // Baþlangýç aðýrlýklarý

		while (hasError && epoch < maxEpoch) {
			hasError = false;

			for (int i = 0; i < Size; i++) { // Tüm örnekler üzerinde dön
				// Her sýnýf için net giriþ ve sigmoid çýktýlarý hesapla
				std::vector<double> net(numClasses, 0.0);
				std::vector<double> outputs(numClasses, 0.0);

				for (int c = 0; c < numClasses; c++) {
					net[c] = weights[c][0] + weights[c][1] * p[i].x1 + weights[c][2] * p[i].x2;
					outputs[c] = 1.0 / (1.0 + exp(-net[c])); // Sigmoid aktivasyon
				}

				// Hedef çýktý vektörü (one-hot encoding)
				std::vector<double> target(numClasses, 0.0);
				target[p[i].id] = 1.0; // Örneðin sýnýfýna karþýlýk gelen hedefi 1 yap

				// Hata hesapla ve aðýrlýklarý güncelle
				for (int c = 0; c < numClasses; c++) {
					double error = target[c] - outputs[c];
					if (std::abs(error) > 0.01) { // Eþik deðer
						hasError = true;

						// Aðýrlýk güncellemeleri
						weights[c][0] += eta * error * outputs[c] * (1 - outputs[c]); // Bias
						weights[c][1] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x1;
						weights[c][2] += eta * error * outputs[c] * (1 - outputs[c]) * p[i].x2;
					}
				}
			}
			epoch++;
		}

		if (!hasError) {
			MessageBox::Show("Delta Learning (Sigmoid, Çoklu Sýnýf) tamamlandý! Epoch: " + epoch);
		}
		else {
			MessageBox::Show("Maksimum epoch sayýsýna ulaþýldý, öðrenme tamamlanamadý.");
		}

		// Karar sýnýrlarýný görselleþtirme
		DrawDecisionBoundaryMultiClass(weights);
}


void DrawDecisionBoundaryMultiClass(const std::vector<std::vector<double>>& weights) {
			   // Grafik boyutlarý (PictureBox veya benzeri bir kontrol için)
			   const int width = pictureBox1->Width;
			   const int height = pictureBox1->Height;

			   // Bitmap oluþtur
			   Bitmap^ bmp = gcnew Bitmap(width, height);

			   // Her piksel için sýnýf tahmini
			   for (int px = 0; px < width; px += 2) {
				   for (int py = 0; py < height; py += 2) {
					   // Piksel koordinatlarýný normalize et (-1 ile 1 aralýðýnda olacak þekilde)
					   double x1 = 2.0 * px / width - 1.0;
					   double x2 = 2.0 * py / height - 1.0;

					   // Her sýnýf için net giriþ ve sigmoid çýktýlarý hesapla
					   std::vector<double> net(weights.size(), 0.0);
					   std::vector<double> outputs(weights.size(), 0.0);

					   for (int c = 0; c < weights.size(); c++) {
						   net[c] = weights[c][0] + weights[c][1] * x1 + weights[c][2] * x2;
						   outputs[c] = 1.0 / (1.0 + exp(-net[c]));
					   }

					   // En yüksek olasýlýðý veren sýnýfý bul
					   int predictedClass = 0;
					   double maxOutput = outputs[0];

					   for (int c = 1; c < outputs.size(); c++) {
						   if (outputs[c] > maxOutput) {
							   maxOutput = outputs[c];
							   predictedClass = c;
						   }
					   }

					   // Sýnýfa göre renk ata
					   Color color;
					   switch (predictedClass) {
					   case 0: color = Color::Red; break;
					   case 1: color = Color::Green; break;
					   case 2: color = Color::Blue; break;
					   case 3: color = Color::Yellow; break;
					   case 4: color = Color::Cyan; break;
					   default: color = Color::Black; break;
					   }

					   // Pikselin rengini ayarla
					   bmp->SetPixel(px, py, color);
				   }

				   DrawSamplesOnPictureBox(pictureBox1, p, Size);

			   }

			   // Bitmap'i PictureBox üzerinde göster
			   pictureBox1->Image = bmp;
};

void DrawSamplesOnPictureBox(PictureBox^ pictureBox, Samples* samples, int count) {
			   if (samples == nullptr || count == 0) return;

			   // PictureBox üzerinde bir bitmap oluþtur
			   if (pictureBox->Image == nullptr) {
				   pictureBox->Image = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
			   }

			   // Graphics nesnesi al
			   Graphics^ g = Graphics::FromImage(pictureBox->Image);

			   // Koordinatlarý çiz
			   for (int i = 0; i < count; i++) {
				   int x = static_cast<int>(samples[i].x1); // double'dan int'e dönüþtür
				   int y = static_cast<int>(samples[i].x2);
				   Color color;
				   switch (samples[i].id) {
				   case 0: color = Color::Pink; break;
				   case 1: color = Color::Red; break;
				   case 2: color = Color::Blue; break;
				   case 3: color = Color::Green; break;
				   case 4: color = Color::Orange; break;
				   default: color = Color::Gray; break;

				   g->DrawLine(gcnew Pen(color, 1.0f), x, y, 5, 5);    // Her bir noktayý çiz
                
				}
				   // Çizimi PictureBox'a uygula
				   pictureBox->Refresh();
				   
			   }
}

private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		//p[Size - 1].id =((int)numericUpDown1->Value - 1); // Kullanýcý tarafýndan seçilen ID deðeri atanýr
		currentClass = ((int)numericUpDown1->Value);
}


};
}
