#pragma once

#ifndef MAINFORM_H
#define MAINFORM_H

#include "AutoComplete.h"
#include "AutoCorrect.h"

#include <typeinfo>
#include <msclr\marshal_cppstd.h>
#include <cstring>
#include <string>
#include <iostream>

#endif // !MAINFORM_H


namespace DsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	// Trie of words
	Trie* MainTrie;
	Trie* ReverseTrie;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;






	private: System::ComponentModel::IContainer^ components;

	protected:



	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->contextMenuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				26.6129F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				73.3871F)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->richTextBox1, 1, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 2);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 163)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(605, 163);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 163);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Text:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox1->Location = System::Drawing::Point(164, 2);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(438, 159);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::richTextBox1_TextChanged);
			this->richTextBox1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::OnMouseDoubleClick);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->flowLayoutPanel1, 0, 1);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 2;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 54.15492F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 45.84507F)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(611, 310);
			this->tableLayoutPanel2->TabIndex = 1;
			this->tableLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel2_Paint);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 169);
			this->flowLayoutPanel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(605, 139);
			this->flowLayoutPanel1->TabIndex = 1;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::flowLayoutPanel1_Paint);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(3, 2);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(155, 59);
			this->button1->TabIndex = 0;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(164, 2);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(155, 59);
			this->button5->TabIndex = 0;
			this->button5->Text = L" ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(325, 2);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 59);
			this->button2->TabIndex = 0;
			this->button2->Text = L" ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 65);
			this->button4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(155, 59);
			this->button4->TabIndex = 0;
			this->button4->Text = L" ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(164, 65);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 59);
			this->button3->TabIndex = 0;
			this->button3->Text = L" ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->toolStripTextBox1,
					this->toolStripSeparator1, this->toolStripMenuItem1, this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4,
					this->toolStripMenuItem5
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(212, 159);
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Enabled = false;
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->ReadOnly = true;
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 27);
			this->toolStripTextBox1->Text = L"Select correct word:";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(208, 6);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem1->Text = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem1_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem2->Text = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem3->Text = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem4->Text = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(211, 24);
			this->toolStripMenuItem5->Text = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainForm::toolStripMenuItem5_Click);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox2 });
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(231, 33);
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->ReadOnly = true;
			this->toolStripTextBox2->ShortcutsEnabled = false;
			this->toolStripTextBox2->Size = System::Drawing::Size(170, 27);
			this->toolStripTextBox2->Text = L"There is no suggestion";
			this->toolStripTextBox2->TextBoxTextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 310);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::OnFormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->contextMenuStrip1->ResumeLayout(false);
			this->contextMenuStrip1->PerformLayout();
			this->contextMenuStrip2->ResumeLayout(false);
			this->contextMenuStrip2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button1->Text = " ";
		button2->Text = " ";
		button3->Text = " ";
		button4->Text = " ";
		button5->Text = " ";

	}
	private:
	private: System::Void tableLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->LastIndexOf(' ') + 1 >= 0)
			this->richTextBox1->Text = this->richTextBox1->Text->Substring(0, this->richTextBox1->Text->LastIndexOf(' ') + 1) +
			this->button5->Text;
		else
			this->richTextBox1->Text = this->button5->Text;
		richTextBox1->Focus();
		richTextBox1->Select(richTextBox1->TextLength, 0);
		richTextBox1->DeselectAll();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->LastIndexOf(' ') + 1 >= 0)
			this->richTextBox1->Text = this->richTextBox1->Text->Substring(0, this->richTextBox1->Text->LastIndexOf(' ') + 1) +
			this->button4->Text;
		else
			this->richTextBox1->Text = this->button4->Text;
		richTextBox1->Focus();
		richTextBox1->Select(richTextBox1->TextLength, 0);
		richTextBox1->DeselectAll();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->LastIndexOf(' ') + 1 >= 0)
			this->richTextBox1->Text = this->richTextBox1->Text->Substring(0, this->richTextBox1->Text->LastIndexOf(' ') + 1) +
			this->button3->Text;
		else
			this->richTextBox1->Text = this->button3->Text;
		richTextBox1->Focus();
		richTextBox1->Select(richTextBox1->TextLength, 0);
		richTextBox1->DeselectAll();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->LastIndexOf(' ') + 1 >= 0)
			this->richTextBox1->Text = this->richTextBox1->Text->Substring(0, this->richTextBox1->Text->LastIndexOf(' ') + 1) +
			this->button2->Text;
		else
			this->richTextBox1->Text = this->button2->Text;
		richTextBox1->Focus();
		richTextBox1->Select(richTextBox1->TextLength, 0);
		richTextBox1->DeselectAll();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->LastIndexOf(' ') + 1 >= 0)
			this->richTextBox1->Text = this->richTextBox1->Text->Substring(0, this->richTextBox1->Text->LastIndexOf(' ') + 1) +
			this->button1->Text;
		else
			this->richTextBox1->Text = this->button1->Text;
		richTextBox1->Focus();
		richTextBox1->Select(richTextBox1->TextLength, 0);
		richTextBox1->DeselectAll();
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int lastSpace = this->richTextBox1->Text->LastIndexOf(' ');
		if (lastSpace < 0) lastSpace = 0;
		string lastWord = msclr::interop::marshal_as<std::string>(this->richTextBox1->Text->Substring(lastSpace));
		if (lastWord[0] == ' ') lastWord = lastWord.substr(1, lastWord.length() - 1);
		if (lastSpace >= 0) {
			button1->BackColor = Color::White;
			button2->BackColor = Color::White;
			button3->BackColor = Color::White;
			button4->BackColor = Color::White;
			button5->BackColor = Color::White;
			if (!isEmptyString(lastWord)) {
				cout << lastWord;
				if (prefixExists(lastWord, MainTrie)) {
					vector<string> suggestions = AutoCompleteSuggestions(lastWord, MainTrie->root);
					button1->Text = msclr::interop::marshal_as<System::String^>(suggestions[0]);
					button2->Text = msclr::interop::marshal_as<System::String^>(suggestions[1]);
					button3->Text = msclr::interop::marshal_as<System::String^>(suggestions[2]);
					button4->Text = msclr::interop::marshal_as<System::String^>(suggestions[3]);
					button5->Text = msclr::interop::marshal_as<System::String^>(suggestions[4]);
				}
				else {
					button1->BackColor = Color::Red;
					button2->BackColor = Color::Red;
					button3->BackColor = Color::Red;
					button4->BackColor = Color::Red;
					button5->BackColor = Color::Red;
				}
			}

		}


	if (richTextBox1->TextLength == 0) {
		richTextBox1->SelectAll();

		this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(178)));

		this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

		richTextBox1->DeselectAll();
	}
	else if (richTextBox1->Text->LastIndexOf(" ") == richTextBox1->TextLength-1) {
		int startingInd = this->richTextBox1->Text->Substring(0, richTextBox1->TextLength - 1)->LastIndexOf(" ") + 1;
		int endingInd = this->richTextBox1->Text->Substring(0, richTextBox1->TextLength - 1)->Length;
		String^ cString = this->richTextBox1->Text->Substring(startingInd, endingInd-startingInd)->ToString();
		string cnString = msclr::interop::marshal_as<std::string>(cString);
		if (!wordExists(cnString, MainTrie)) {

			this->richTextBox1->SelectionStart = startingInd;
			richTextBox1->SelectionLength = endingInd - startingInd;

			richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->richTextBox1->SelectionColor = System::Drawing::Color::Red;

				richTextBox1->DeselectAll();

				richTextBox1->Select(richTextBox1->TextLength, 0);

			}
		}

}
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   void OnMouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);

private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ newStr = this->toolStripMenuItem1->Text;

	int start = richTextBox1->SelectionStart;
	int len = richTextBox1->SelectionLength;

	if (richTextBox1->SelectedText[richTextBox1->SelectedText->Length - 1] == ' ') {
		newStr += " ";
		len--;
	}


	this->richTextBox1->SelectedText = this->richTextBox1->SelectedText->Replace(this->richTextBox1->SelectedText, newStr);

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(178)));

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

	this->richTextBox1->DeselectAll();

	richTextBox1->Select(richTextBox1->TextLength, 0);

}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ newStr = this->toolStripMenuItem2->Text;

	int start = richTextBox1->SelectionStart;
	int len = richTextBox1->SelectionLength;

	if (richTextBox1->SelectedText[richTextBox1->SelectedText->Length - 1] == ' ') {
		newStr += " ";
		len--;
	}


	this->richTextBox1->SelectedText = this->richTextBox1->SelectedText->Replace(this->richTextBox1->SelectedText, newStr);

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(178)));

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

	this->richTextBox1->DeselectAll();

		richTextBox1->Select(richTextBox1->TextLength, 0);

}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ newStr = this->toolStripMenuItem3->Text;

	int start = richTextBox1->SelectionStart;
	int len = richTextBox1->SelectionLength;

	if (richTextBox1->SelectedText[richTextBox1->SelectedText->Length - 1] == ' ') {
		newStr += " ";
		len--;
	}


	this->richTextBox1->SelectedText = this->richTextBox1->SelectedText->Replace(this->richTextBox1->SelectedText, newStr);

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(178)));

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

	this->richTextBox1->DeselectAll();

	richTextBox1->Select(richTextBox1->TextLength, 0);
}
private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ newStr = this->toolStripMenuItem4->Text;

	int start = richTextBox1->SelectionStart;
	int len = richTextBox1->SelectionLength;

	if (richTextBox1->SelectedText[richTextBox1->SelectedText->Length - 1] == ' ') {
		newStr += " ";
		len--;
	}


	this->richTextBox1->SelectedText = this->richTextBox1->SelectedText->Replace(this->richTextBox1->SelectedText, newStr);

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(178)));

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

	this->richTextBox1->DeselectAll();

	richTextBox1->Select(richTextBox1->TextLength, 0);

}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ newStr = this->toolStripMenuItem5->Text;

	int start = richTextBox1->SelectionStart;
	int len = richTextBox1->SelectionLength;

	if (richTextBox1->SelectedText[richTextBox1->SelectedText->Length - 1] == ' ') {
		newStr += " ";
		len--;
	}


	this->richTextBox1->SelectedText = this->richTextBox1->SelectedText->Replace(this->richTextBox1->SelectedText, newStr);

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(178)));

	richTextBox1->Select(start, newStr->Length);

	this->richTextBox1->SelectionColor = System::Drawing::Color::Black;

	this->richTextBox1->DeselectAll();

	richTextBox1->Select(richTextBox1->TextLength, 0);

}
	   void OnFormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
};
};

void DsProject::MainForm::OnMouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

	String^ cT = this->richTextBox1->SelectedText->ToString();
	string checkingString = msclr::interop::marshal_as<std::string>(cT);

	vector<string> correctWords;

	if (checkingString == "") {

		this->contextMenuStrip2->Show(Cursor->Position.X, Cursor->Position.Y);

	}
	else {

		if (checkingString[checkingString.length() - 1] == ' ')
			checkingString = checkingString.substr(0, checkingString.length() - 1);

		correctWords = autoCorrect(MainTrie, ReverseTrie, checkingString);

		if (wordExists(checkingString, MainTrie))

			this->contextMenuStrip2->Show(Cursor->Position.X, Cursor->Position.Y);

		else {
			for (int i = 0; i < 5; i++) {
				char* char_array = new char[correctWords[i].length() + 1];
				char_array[correctWords[i].length()] = '\0';
				for (int j = 0; j < correctWords[i].length(); j++) {
					char_array[j] = correctWords[i][j];
				}
				this->contextMenuStrip1->Items[i + 2]->Text = gcnew String(char_array);
				delete[] char_array;

			}

			this->contextMenuStrip1->Show(Cursor->Position.X, Cursor->Position.Y);
		}
	}
}


void DsProject::MainForm::OnFormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
	
}
