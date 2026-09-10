/*#include<stdio.h>
#include<string.h>
int main()
{

   char string[100];
   gets(string);
   int length=0;
   while(string[length]!='\0')
   {
   	length++;
   }
   printf("\n%d",length);
   	
	return 0;
}
*/

#include <iostream>
using namespace std;

int main() {
    const int costX = 10, spaceX = 6, volumeX = 8;
    const int costY = 20, spaceY = 8, volumeY = 12;
    const int budget = 140, maxSpace = 72;

    int maxVolume = 0, bestX = 0, bestY = 0;

    for (int x = 0; x <= budget / costX; ++x) {
        for (int y = 0; y <= budget / costY; ++y) {
            int totalCost = (x * costX) + (y * costY);
            int totalSpace = (x * spaceX) + (y * spaceY);
            int totalVolume = (x * volumeX) + (y * volumeY);

            if (totalCost <= budget && totalSpace <= maxSpace && totalVolume > maxVolume) {
                maxVolume = totalVolume;
                bestX = x;
                bestY = y;
            }
        }
    }

    cout << bestX << " Cabinet X, " << bestY << " Cabinet Y, Volume: " << maxVolume << endl;

    return 0;
}