#include "queue.h"
#include "queue_public.h"
#include "queue_protected.h"
#include "queue_private.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	int b = 0;
	int i;
	Queue MyQ;
	MyQ.push(9);
	MyQ.push(8);
	MyQ.push(91);
	queue_public MyP;
	queue_protected MyPr;
	queue_private MyPv;
	cout << "Выберите тип очереди\n 1. Public\n 2. Protected\n 3. Private\n";
	cin >> a;
	while (b != 8) {
		cout << "Выберите действие\n 1. Добавить элемент\n 2. Проверка очереди\n 3. Показать всю очередь\n 4. Вывести первый элемент\n 5. Наименьший элемент\n 6. Сделать копию\n 7. Объединить очереди\n 8.Закрыть\n";
		cin >> b;
		switch (b)
		{
		case 1:{
			cout << "Ведите элемент очереди\n";
			switch (a)
			{
			case 1:
				cin >> i;
				MyP.push(i);
				break;

			case 2:
				cin >> i;
				MyPr.push_prot(i);
				break;
			case 3:
				cin >> i;
				MyPv.push_priv(i);
				break;
			}
		}
			break;

		case 2: {
			switch (a)
			{
			case 1:
				cout << MyP.is_empty() << endl;
				break;

			case 2:
				cout << MyPr.is_empty_prot() << endl;
				break;
			case 3:
				cout << MyPv.is_empty_priv() << endl;
				break;
			}
		}
		break;


			case 3:
			{
				switch (a)
				{
				case 1:
					MyP.show_all();
					break;

				case 2:
					MyPr.show_all_prot();
					break;
				case 3:
					MyPv.show_all_priv();
					break;
				}
			}
				break;

			case 4:
			{
				switch (a)
				{
				case 1:
					MyP.first_out();
					break;

				case 2:
					MyPr.first_out_prot();
					break;
				case 3:
					MyPv.first_out_priv();
					break;
				}
			}
				break;

			case 5:
			{
				switch (a)
				{
				case 1:
					cout << MyP.show_min() << endl;
					break;

				case 2:
					cout << MyPr.show_min_prot() << endl;
					break;
				case 3:
					cout << MyPv.show_min_priv() << endl;
					break;
				}
			}
				break;
			case 6: {
				switch (a)
				{
				case 1:
					MyP.q_copy();
					break;

				case 2:
					MyPr.q_copy_prot();
					break;
				case 3:
					MyPv.q_copy_priv();
					break;
				}
			}
				break;

			case 7: {
				switch (a)
				{
				case 1:

					MyP.merge(MyP,MyQ);
					break;

				case 2:
					MyPr.merge_prot(MyPr, MyQ);
					break;
				case 3:
					MyPv.merge_priv(MyPv, MyQ);
					break;
				}
			}
		default:
			break;
		}
	}
	return 0;
};