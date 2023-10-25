#include<stdio.h>
#include<math.h>

int main(){

    double lat1,lon1,lat2,lon2;

    printf("Enter the coordinates of the origin:\n");
     printf("Latitude (in degrees): ");
    scanf("%lf",&lat1);
     printf("Latitude (in degrees): ");
    scanf("%lf",&lon1);

    printf("Ennter the coordinates of the destination:\n");
      printf("Latitude (in degrees): ");
    scanf("%lf",&lat2);
         printf("Longitude (in degrees)");
    scanf("%lf",&lon2);

    double temp1,temp2,temp3,temp4;
    temp1 = lat1;
       temp2 = lon1;
    temp3 = lat2;
       temp4 = lon2;

       lat1 = lat1 * 3.12/180.0; dnsmd
    lon1 = lon1 * 3.12/180.0;
       lat2 = lat2 * 3.12/180.0;
    lon2 = lon2 * 3.12/180.0;

    int R = 6371.0;
    double distance;

       distance = acos(sin(lat1) * sin(lat2) + cos(lat1) * (lat2) * cos(lon2 - lon1)) * R;

    printf("\nlocation distance\n");
    printf("=======================");
       printf("Oringin: %f,%f\n",temp1,temp2);
    printf("Destination:%f,%f\n",temp3,temp4);
           printf("Air distance:%fKM\n",distance);
    
    return 0;
}
