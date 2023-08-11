#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)
#define PRC_WDD 15.40
#define PRC_ETIKA 7.55
#define PRC_PCD_PRA 1.40
#define PRC_PCD_TUT 1.30
#define PRC_PCD_LEC 12.00
#define PRC_AADMATH_TUT 10.10
#define PRC_AADMATH_PYQ 4.40
#define PRC_IOIT_LEC 11.20
#define PRC_IOIT_TUT 0.80
#define PRC_IOIT_PRA 2.40

void main() {

	char group[3];
	int wdd, etika, pcdtut, pcdlec, pcdpra, addmathpyq, addmathtut, ioittut, ioitlec, ioitpra;
	double prcWdd, prcEtika, prcPcdtut, prcPcdlec, prcPcdpra, prcAddmathpyq, prcAddmathtut, prcIoittut, prcIoitlec, prcIoitpra, totalPrice;

	printf("Enter your group   >");
	scanf("%s", &group);
	
	rewind(stdin);
	printf("Enter the quantity of Web design and development                        >");
	scanf("%d", &wdd);

	rewind(stdin);
	printf("Enter the quantity of Penghayatan Etika dan peradaban                   >");
	scanf("%d", &etika);

	rewind(stdin);
	printf("Enter the quantity of Programme Concept and Design I tutorial           >");
	scanf("%d", &pcdtut);

	rewind(stdin);
	printf("Enter the quantity of Programme Concept and Design I practical          >");
	scanf("%d", &pcdpra);

	rewind(stdin);
	printf("Enter the quantity of Programme Concept and Design I lecturer           >");
	scanf("%d", &pcdlec);

	rewind(stdin);
	printf("Enter the quantity of Calculus ans Algebra lecturer/Tutorial            >");
	scanf("%d", &addmathtut);

	rewind(stdin);
	printf("Enter the quantity of Calculus ans Algebra past year question           >");
	scanf("%d", &addmathpyq);

	rewind(stdin);
	printf("Enter the quantity of Introduction of Information Technology Tutorial   >");
	scanf("%d", &ioittut);

	rewind(stdin);
	printf("Enter the quantity of Introduction of Information Technology Practical  >");
	scanf("%d", &ioitpra);

	rewind(stdin);
	printf("Enter the quantity of Introduction of Information Technology lecturer   >");
	scanf("%d", &ioitlec);

	prcWdd = wdd * PRC_WDD;
	prcEtika = etika * PRC_ETIKA;
	prcPcdtut = pcdtut * PRC_PCD_TUT;
	prcPcdlec = pcdlec * PRC_PCD_LEC;
	prcPcdpra = pcdpra * PRC_PCD_PRA;
	prcAddmathpyq = addmathpyq * PRC_AADMATH_PYQ;
	prcAddmathtut = addmathtut * PRC_AADMATH_TUT;
	prcIoitlec = ioitlec * PRC_IOIT_LEC;
	prcIoitpra = ioitpra * PRC_IOIT_PRA;
	prcIoittut = ioittut * PRC_IOIT_TUT;
	totalPrice = prcWdd + prcEtika + prcPcdtut + prcPcdlec + prcPcdpra + prcAddmathpyq + prcAddmathtut + prcIoitlec + prcIoitpra + prcIoittut;
	
	printf("Group %s: \n", group);
	printf("---------------------------------------------------------------------\n");
	printf("Books                                               Quantity         Price\n");
	printf("WEB DESIGN AND DEVELOPMENT                          %8d         %5.2lf\n",wdd, prcWdd);
	printf("PENGHAYATAN ETIKA DAN PERADABAN                     %8d         %5.2lf\n",etika, prcEtika);
	printf("PROGRAMMING CONCEPTS AND DESIGN I (Practical)       %8d         %5.2lf\n",pcdpra, prcPcdpra);
	printf("PROGRAMMING CONCEPTS AND DESIGN I(Tutorial)         %8d         %5.2lf\n",pcdtut, prcPcdtut);
	printf("PROGRAMMING CONCEPTS AND DESIGN I (Lecture)         %8d         %5.2lf\n",pcdlec, prcPcdlec);
	printf("CALCULUS AND ALGEBRA (past year question)           %8d         %5.2lf\n",addmathpyq, prcAddmathpyq);
	printf("CALCULUS AND ALGEBRA(tutorial and lecture)          %8d         %5.2lf\n",addmathtut, prcAddmathtut);
	printf("INTRODUCTION TO INFORMATION TECHNOLOGY (lecture)    %8d         %5.2lf\n",ioitlec, prcIoitlec);
	printf("INTRODUCTION TO INFORMATION TECHNOLOGY (tutorial)   %8d         %5.2lf\n",ioittut, prcIoittut);
	printf("INTRODUCTION TO INFORMATION TECHNOLOGY (practical)  %8d         %5.2lf\n",ioitpra, prcIoitpra);
	printf("                                                       TOTAL        %5.2lf\n",totalPrice);

	system("pause");

}