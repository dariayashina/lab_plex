#pragma once
#include "Plex.h"
TChart* Plex;
TPoint* CurrPoint;
Point* p = new Point;
Point* Tmp = new Point;
TChart* LineNew;
TPoint* PointsForm;
namespace labplex {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			BackColor = Color::White;
			gr = CreateGraphics();
			Plex = new TChart;
			Plex->SetVisible(false);
			CurrPoint = new TPoint;
			CurrPoint->SetX(0);
			CurrPoint->SetY(0);
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	public:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	public:
		Graphics^ gr;
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
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(25, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Нарисовать квадрат";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Click_botton1);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(25, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 45);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Переместить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Click_button2);
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(25, 149);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 38);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Скрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Click_button3);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(37, 245);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(57, 21);
			this->textBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(48, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L" по X";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(51, 269);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"по Y";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(37, 287);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(57, 21);
			this->textBox2->TabIndex = 6;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(795, 558);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::NoMove2D;
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"PLEX";
			this->TransparencyKey = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Click_botton1(System::Object^ sender, System::EventArgs^ e) {
		TChart* BC = new TChart;
		TChart* CA = new TChart;
		TChart* AD = new TChart;

		TPoint* B = new TPoint(200, 200);
		TPoint* C = new TPoint(200, 400);
		TPoint* A = new TPoint(400, 400);
		TPoint* D = new TPoint(400, 200);



		CurrPoint->SetX(-1);
		CurrPoint->SetY(-1);

		BC->SetFirst(B);
		BC->SetLast(C);
		CA->SetFirst(BC);
		CA->SetLast(A);
		AD->SetFirst(CA);
		AD->SetLast(D);

		Plex->SetFirst(AD);
		Plex->SetLast(B);
		Plex->Show(gr, Pens::Black);
		Plex->SetVisible(true);
	}
	private: System::Void Click_button2(System::Object^ sender, System::EventArgs^ e) {
		int x = Convert::ToInt32(textBox1->Text);
		int y = Convert::ToInt32(textBox2->Text);

		Plex->Hide(gr, Pens::White);
		Plex->MoveTo(x, y);
		Plex->Show(gr, Pens::Black);
		Plex->Reset();
	}
	private: System::Void Click_button3(System::Object^ sender, System::EventArgs^ e) {
		if (Plex->GetVisible())
		{
			Plex->Hide(gr, Pens::White);
			Plex->SetVisible(false);
		}
	}
	private: System::Void MyForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) 
	{
		if (Plex->GetVisible())
		{
			*p = PointToClient(Control::MousePosition);
			CurrPoint = Plex->SetCurrPoint(gr, Pens::Black, p->X, p->Y);
		}
	}
private: System::Void MyForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (Plex->GetVisible() && CurrPoint->GetX() > 0 && CurrPoint->GetY() > 0 && e->X != CurrPoint->GetX() && e->Y != CurrPoint->GetY())
	{
		*Tmp = PointToClient(Control::MousePosition);

		PointsForm = new TPoint(Tmp->X, Tmp->Y);
		LineNew = new TChart;

		LineNew->SetFirst(PointsForm);
		LineNew->SetLast(CurrPoint);

		Plex->AddLine(gr, Pens::Black, CurrPoint, LineNew);
		Plex->Show(gr, Pens::Black);
	}
}
};
}

