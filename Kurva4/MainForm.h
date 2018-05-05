#pragma once
#include "Table.h"

Table table;

namespace Kurva4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^  dgvMatrixTable;
	private: System::Windows::Forms::Button^  btnDisable1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnElem56;

	private: System::Windows::Forms::Button^  btnElem46;
	private: System::Windows::Forms::Button^  btnElem45;
	private: System::Windows::Forms::Button^  btnElem36;
	private: System::Windows::Forms::Button^  btnElem35;
	private: System::Windows::Forms::Button^  btnElem34;
	private: System::Windows::Forms::Button^  btnElem26;
	private: System::Windows::Forms::Button^  btnElem25;
	private: System::Windows::Forms::Button^  btnElem24;
	private: System::Windows::Forms::Button^  btnElem23;
	private: System::Windows::Forms::Button^  btnElem16;
	private: System::Windows::Forms::Button^  btnElem15;
	private: System::Windows::Forms::Button^  btnElem14;
	private: System::Windows::Forms::Button^  btnElem13;
	private: System::Windows::Forms::Button^  btnElem12;
	private: System::Windows::Forms::Button^  btnMakeDominoArea;
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
			this->dgvMatrixTable = (gcnew System::Windows::Forms::DataGridView());
			this->btnDisable1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnElem56 = (gcnew System::Windows::Forms::Button());
			this->btnElem46 = (gcnew System::Windows::Forms::Button());
			this->btnElem45 = (gcnew System::Windows::Forms::Button());
			this->btnElem36 = (gcnew System::Windows::Forms::Button());
			this->btnElem35 = (gcnew System::Windows::Forms::Button());
			this->btnElem34 = (gcnew System::Windows::Forms::Button());
			this->btnElem26 = (gcnew System::Windows::Forms::Button());
			this->btnElem25 = (gcnew System::Windows::Forms::Button());
			this->btnElem24 = (gcnew System::Windows::Forms::Button());
			this->btnElem23 = (gcnew System::Windows::Forms::Button());
			this->btnElem16 = (gcnew System::Windows::Forms::Button());
			this->btnElem15 = (gcnew System::Windows::Forms::Button());
			this->btnElem14 = (gcnew System::Windows::Forms::Button());
			this->btnElem13 = (gcnew System::Windows::Forms::Button());
			this->btnElem12 = (gcnew System::Windows::Forms::Button());
			this->btnMakeDominoArea = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrixTable))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvMatrixTable
			// 
			this->dgvMatrixTable->AllowUserToAddRows = false;
			this->dgvMatrixTable->AllowUserToDeleteRows = false;
			this->dgvMatrixTable->AllowUserToResizeColumns = false;
			this->dgvMatrixTable->AllowUserToResizeRows = false;
			this->dgvMatrixTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvMatrixTable->ColumnHeadersVisible = false;
			this->dgvMatrixTable->Location = System::Drawing::Point(12, 98);
			this->dgvMatrixTable->Name = L"dgvMatrixTable";
			this->dgvMatrixTable->RowHeadersVisible = false;
			this->dgvMatrixTable->RowTemplate->Height = 24;
			this->dgvMatrixTable->Size = System::Drawing::Size(691, 360);
			this->dgvMatrixTable->TabIndex = 0;
			// 
			// btnDisable1
			// 
			this->btnDisable1->Location = System::Drawing::Point(12, 24);
			this->btnDisable1->Name = L"btnDisable1";
			this->btnDisable1->Size = System::Drawing::Size(115, 68);
			this->btnDisable1->TabIndex = 1;
			this->btnDisable1->Text = L"DisableCellsAroundDoubleNumbers";
			this->btnDisable1->UseVisualStyleBackColor = true;
			this->btnDisable1->Click += gcnew System::EventHandler(this, &MainForm::btnDisable1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnElem56);
			this->groupBox1->Controls->Add(this->btnElem46);
			this->groupBox1->Controls->Add(this->btnElem45);
			this->groupBox1->Controls->Add(this->btnElem36);
			this->groupBox1->Controls->Add(this->btnElem35);
			this->groupBox1->Controls->Add(this->btnElem34);
			this->groupBox1->Controls->Add(this->btnElem26);
			this->groupBox1->Controls->Add(this->btnElem25);
			this->groupBox1->Controls->Add(this->btnElem24);
			this->groupBox1->Controls->Add(this->btnElem23);
			this->groupBox1->Controls->Add(this->btnElem16);
			this->groupBox1->Controls->Add(this->btnElem15);
			this->groupBox1->Controls->Add(this->btnElem14);
			this->groupBox1->Controls->Add(this->btnElem13);
			this->groupBox1->Controls->Add(this->btnElem12);
			this->groupBox1->Location = System::Drawing::Point(13, 477);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(641, 82);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// btnElem56
			// 
			this->btnElem56->Location = System::Drawing::Point(601, 21);
			this->btnElem56->Name = L"btnElem56";
			this->btnElem56->Size = System::Drawing::Size(36, 60);
			this->btnElem56->TabIndex = 14;
			this->btnElem56->Text = L"5  -  6";
			this->btnElem56->UseVisualStyleBackColor = true;
			// 
			// btnElem46
			// 
			this->btnElem46->Location = System::Drawing::Point(559, 22);
			this->btnElem46->Name = L"btnElem46";
			this->btnElem46->Size = System::Drawing::Size(36, 60);
			this->btnElem46->TabIndex = 13;
			this->btnElem46->Text = L"4  -  6";
			this->btnElem46->UseVisualStyleBackColor = true;
			// 
			// btnElem45
			// 
			this->btnElem45->Location = System::Drawing::Point(517, 21);
			this->btnElem45->Name = L"btnElem45";
			this->btnElem45->Size = System::Drawing::Size(36, 60);
			this->btnElem45->TabIndex = 12;
			this->btnElem45->Text = L"4  -  5";
			this->btnElem45->UseVisualStyleBackColor = true;
			// 
			// btnElem36
			// 
			this->btnElem36->Location = System::Drawing::Point(475, 21);
			this->btnElem36->Name = L"btnElem36";
			this->btnElem36->Size = System::Drawing::Size(36, 60);
			this->btnElem36->TabIndex = 11;
			this->btnElem36->Text = L"3  -  6";
			this->btnElem36->UseVisualStyleBackColor = true;
			// 
			// btnElem35
			// 
			this->btnElem35->Location = System::Drawing::Point(433, 21);
			this->btnElem35->Name = L"btnElem35";
			this->btnElem35->Size = System::Drawing::Size(36, 60);
			this->btnElem35->TabIndex = 10;
			this->btnElem35->Text = L"3  -  5";
			this->btnElem35->UseVisualStyleBackColor = true;
			// 
			// btnElem34
			// 
			this->btnElem34->Location = System::Drawing::Point(391, 22);
			this->btnElem34->Name = L"btnElem34";
			this->btnElem34->Size = System::Drawing::Size(36, 60);
			this->btnElem34->TabIndex = 9;
			this->btnElem34->Text = L"3  -  4";
			this->btnElem34->UseVisualStyleBackColor = true;
			// 
			// btnElem26
			// 
			this->btnElem26->Location = System::Drawing::Point(349, 22);
			this->btnElem26->Name = L"btnElem26";
			this->btnElem26->Size = System::Drawing::Size(36, 60);
			this->btnElem26->TabIndex = 8;
			this->btnElem26->Text = L"2  -  6";
			this->btnElem26->UseVisualStyleBackColor = true;
			// 
			// btnElem25
			// 
			this->btnElem25->Location = System::Drawing::Point(307, 22);
			this->btnElem25->Name = L"btnElem25";
			this->btnElem25->Size = System::Drawing::Size(36, 60);
			this->btnElem25->TabIndex = 7;
			this->btnElem25->Text = L"2  -  5";
			this->btnElem25->UseVisualStyleBackColor = true;
			// 
			// btnElem24
			// 
			this->btnElem24->Location = System::Drawing::Point(265, 22);
			this->btnElem24->Name = L"btnElem24";
			this->btnElem24->Size = System::Drawing::Size(36, 60);
			this->btnElem24->TabIndex = 6;
			this->btnElem24->Text = L"2  -  4";
			this->btnElem24->UseVisualStyleBackColor = true;
			// 
			// btnElem23
			// 
			this->btnElem23->Location = System::Drawing::Point(223, 22);
			this->btnElem23->Name = L"btnElem23";
			this->btnElem23->Size = System::Drawing::Size(36, 60);
			this->btnElem23->TabIndex = 5;
			this->btnElem23->Text = L"2  -  3";
			this->btnElem23->UseVisualStyleBackColor = true;
			// 
			// btnElem16
			// 
			this->btnElem16->Location = System::Drawing::Point(181, 22);
			this->btnElem16->Name = L"btnElem16";
			this->btnElem16->Size = System::Drawing::Size(36, 60);
			this->btnElem16->TabIndex = 4;
			this->btnElem16->Text = L"1  -  6";
			this->btnElem16->UseVisualStyleBackColor = true;
			// 
			// btnElem15
			// 
			this->btnElem15->Location = System::Drawing::Point(139, 22);
			this->btnElem15->Name = L"btnElem15";
			this->btnElem15->Size = System::Drawing::Size(36, 60);
			this->btnElem15->TabIndex = 3;
			this->btnElem15->Text = L"1  -  5";
			this->btnElem15->UseVisualStyleBackColor = true;
			// 
			// btnElem14
			// 
			this->btnElem14->Location = System::Drawing::Point(97, 22);
			this->btnElem14->Name = L"btnElem14";
			this->btnElem14->Size = System::Drawing::Size(36, 60);
			this->btnElem14->TabIndex = 2;
			this->btnElem14->Text = L"1  -  4";
			this->btnElem14->UseVisualStyleBackColor = true;
			// 
			// btnElem13
			// 
			this->btnElem13->Location = System::Drawing::Point(55, 22);
			this->btnElem13->Name = L"btnElem13";
			this->btnElem13->Size = System::Drawing::Size(36, 60);
			this->btnElem13->TabIndex = 1;
			this->btnElem13->Text = L"1  -  3";
			this->btnElem13->UseVisualStyleBackColor = true;
			// 
			// btnElem12
			// 
			this->btnElem12->Location = System::Drawing::Point(13, 21);
			this->btnElem12->Name = L"btnElem12";
			this->btnElem12->Size = System::Drawing::Size(36, 60);
			this->btnElem12->TabIndex = 0;
			this->btnElem12->Text = L"1  -  2";
			this->btnElem12->UseVisualStyleBackColor = true;
			this->btnElem12->Click += gcnew System::EventHandler(this, &MainForm::btnElem12_Click);
			// 
			// btnMakeDominoArea
			// 
			this->btnMakeDominoArea->Location = System::Drawing::Point(380, 38);
			this->btnMakeDominoArea->Name = L"btnMakeDominoArea";
			this->btnMakeDominoArea->Size = System::Drawing::Size(143, 33);
			this->btnMakeDominoArea->TabIndex = 3;
			this->btnMakeDominoArea->Text = L"MakeAreasForDomino";
			this->btnMakeDominoArea->UseVisualStyleBackColor = true;
			this->btnMakeDominoArea->Click += gcnew System::EventHandler(this, &MainForm::btnMakeDominoArea_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 571);
			this->Controls->Add(this->btnMakeDominoArea);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnDisable1);
			this->Controls->Add(this->dgvMatrixTable);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrixTable))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		dgvMatrixTable->ColumnCount = 11; // начальное число столбцов и строк
		dgvMatrixTable->RowCount = 11;
		dgvMatrixTable->AutoResizeColumns();//выравнивание ячеек		
		ShowMatrix(table.GetSize(), table.GetMatrix());
	}

	private: void ShowMatrix(int size, Element **matrix) {// size размерность матрицы, **matrix – указатель на указатель типа int (собственно сама матрица) 
		for (int i = 0; i < size; i++) 
		{
			for (int j = 0; j < size; j++) 
			{
				dgvMatrixTable->Rows[i]->Cells[j]->Value = matrix[i][j].GetValue(); // записываем в матрицы значения ячеек таблицы, предварительно конвертировав их в тип int
				if (matrix[i][j].GetValue() == -1) dgvMatrixTable->Rows[i]->Cells[j]->Style->BackColor = Color::Red;
			}
		}
	}

	private: System::Void btnDisable1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		table.DisableCellsAroundDoubleNumbers();
		table.DisableSingeCells();
		ShowMatrix(table.GetSize(), table.GetMatrix());
	}

private: System::Void btnElem12_Click(System::Object^  sender, System::EventArgs^  e) 
{
	
}
private: System::Void btnMakeDominoArea_Click(System::Object^  sender, System::EventArgs^  e)
{
	for (int i = 1; i < table.GetSize(); i++)
	{
		for (int j = 1; j < table.GetSize(); j++)
		{
			AddToTable(table.GetMatrix(), i, j, Domino::Position::Vertical);
			AddToTable(table.GetMatrix(), i, j, Domino::Position::Horizontal);
		}
	}	
}

		 void AddToTable(Element **matrix, int a, int b, Domino::Position position)
		 {
			 int iMax;
			 int jMax;
			 int NotEmptyCells = 0;
			 Element dominoFirstElement = matrix[a][b];
			 Element dominoSecondElement;
			 int p = a;
			 int r = b;
			 if (a > 8 || b > 8)
			 {
				 return;
			 }
			 if (position == Domino::Position::Horizontal)
			 {
				 iMax = 1;
				 jMax = 2;
				 r++;
			 }
			 else
			 {
				 iMax = 2;
				 jMax = 1;
				 p++;
			 }
			 dominoSecondElement = matrix[p][r];
			 for (int i = -1; i <= iMax; i++)
			 {
				 for (int j = -1; j <= jMax; j++)
				 {
					 if (position == Domino::Position::Horizontal && i == 0 && (j == 0 || j == 1)) continue;
					 else if (position == Domino::Position::Vertical && (i == 0 || i == 1) && j == 0)  continue;
					 else
					 {
						 Element currentElement = matrix[a + i][b + j];
						 if (currentElement.GetValue() != 0) NotEmptyCells++;						 
					 }
				 }
			 }
			 if (NotEmptyCells == 10)
			 {
				 dgvMatrixTable->Rows[a]->Cells[b]->Style->BackColor = Color::Yellow;
				 dgvMatrixTable->Rows[p]->Cells[r]->Style->BackColor = Color::Yellow;
			 }
		 }
};
}
