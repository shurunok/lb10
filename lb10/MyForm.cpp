#pragma once

namespace lb6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(230, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ââåä³òü ìàññèâ ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(195, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(172, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Ñîðòóâàòè ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(557, 385);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		void bubbleSort(int arr[], int n) {
			for (int i = 0; i < n - 1; i++) {
				for (int j = 0; j < n - i - 1; j++) {
					if (arr[j] < arr[j + 1]) {
						// Îáì³í åëåìåíò³â
						int temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
				}
			}
		}

		// Ôóíêö³ÿ äëÿ çíàõîäæåííÿ ê³ëüêîñò³ ð³çíèõ ÷èñåë ó ìàñèâ³
		int countDistinct(int arr[], int n) {
			int count = 0;

			for (int i = 0; i < n; i++) {
				bool isDistinct = true;
				for (int j = 0; j < i; j++) {
					if (arr[i] == arr[j]) {
						isDistinct = false;
						break;
					}
				}
				if (isDistinct) {
					count++;
				}
			}

			return count;
		}

		int main() {
			int n;
			cout << "Ââåä³òü ðîçì³ð ìàñèâó: ";
			cin >> n;

			int* arr = new int[n];

			cout << "Ââåä³òü åëåìåíòè ìàñèâó:" << endl;
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}

			// Çíàõîäæåííÿ ê³ëüêîñò³ ð³çíèõ ÷èñåë
			int distinctCount = countDistinct(arr, n);
			cout << "Ê³ëüê³ñòü ð³çíèõ ÷èñåë: " << distinctCount << endl;

			// Ñîðòóâàííÿ ìàñèâó çà ñïàäàííÿì
			bubbleSort(arr, n);

			cout << "Ìàñèâ, â³äñîðòîâàíèé çà ñïàäàííÿì:" << endl;
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

			delete[] arr;

			return 0;
		}
	}
	};
}