/*
Написать программу, которая будет рассчитывать чистую зарплату, от оклада
*/
/*
Пенсионный взнос = 10% от Оклад
ИПН(Индивидуальный подоходный налог) = 10% от (Оклад - Пенсионный взнос- Минимальная зароботная плата)
Социальные отчисления = 3,5% от (Оклад - Пенсионный взнос)
Социальный налог = (11% от (Оклад - Пенсионный взнос)) - Социальные отчисления
Медицинская страховка = 2% от Оклад
Банковские услуги = 1% от чистых
 вся информация zakon.kz

*/
import java.util.*;

class Main{
	public static void main(String args[]){
		Scanner in = new Scanner(System.in);
			System.out.print("Введите оклад: ");
			int oklad = in.nextInt();
			System.out.print("Ввидите минимальную зароботную плату: ");
			int mzp = in.nextInt();
			double pensionnyi_vznoz = 0.1 * oklad;
			
			double ipn = 0.1 * (oklad - pensionnyi_vznoz - mzp);
			
			double social_otchisleniya = 0.035 * (oklad - pensionnyi_vznoz);
			
			double social_nalog = (0.11 * (oklad - pensionnyi_vznoz)) - social_otchisleniya;
			
			double med_strakhovka = 0.02 * oklad;
			
			double zatraty = pensionnyi_vznoz + ipn + social_otchisleniya + social_nalog + med_strakhovka;
			
			double chistymi = oklad - zatraty;
			
			double bank_uslugi = 0.01 * chistymi;
			
			System.out.println("Расходы на налоги: " + zatraty);
			System.out.println("Банковские услуги: " + bank_uslugi);
			System.out.println("Затраты работодателя(налоги и банковские усуги): " + (zatraty + bank_uslugi));
			System.out.println("Чистыми: " + chistymi);
	}
}