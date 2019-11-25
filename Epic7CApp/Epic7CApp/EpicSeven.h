#pragma once
#include "My2nd.h"

namespace Epic7CApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EpicSeven
	/// </summary>
	public ref class EpicSeven : public System::Windows::Forms::Form
	{
	public:
		EpicSeven(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EpicSeven()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button7;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EpicSeven::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 90);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Abyss";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EpicSeven::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(253, 90);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(73, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"6* Fodder Calculator";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EpicSeven::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(40, 256);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(73, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"W11 Comps";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &EpicSeven::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(253, 256);
			this->button4->Name = L"button4";
			this->button4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button4->Size = System::Drawing::Size(73, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Hero Wikipedia";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &EpicSeven::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(429, 90);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(73, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"EventRoutes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &EpicSeven::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(429, 256);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(73, 36);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Hero Reviews";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &EpicSeven::button6_Click);
			// 
			// button7
			// 
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(12, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(148, 36);
			this->button7->TabIndex = 7;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &EpicSeven::button7_Click);
			// 
			// EpicSeven
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(562, 348);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"EpicSeven";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"Epic7CommunityApp";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Visible = false;
		Epic7CApp::My2nd yeet;
		yeet.ShowDialog();
		if (yeet.Visible != true) {
			yeet.Close();
			this->Visible = true;
		}
		int abyssFloors[] = { 50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
							80,81,82,83,84,85,86,87,88,89,90 };


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Epic7CApp::EpicSeven object_name_second;
		object_name_second.ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Epic7CApp::EpicSeven object_name_third;
		object_name_third.ShowDialog();
		this->Show();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Epic7CApp::EpicSeven object_name_forth;
	object_name_forth.ShowDialog();
	this->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	Epic7CApp::EpicSeven object_name_fifth;
	object_name_fifth.ShowDialog();
	this->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Epic7CApp::EpicSeven object_name_sixth;
	object_name_sixth.ShowDialog();
	this->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
