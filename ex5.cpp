#include <iostream>
using namespace std;

double celciusToFarenheit(double celcius){
    double farenheit = (celcius * 1.8) + 32;
    return farenheit;
}
void celciusToFarenheitWeek(int weekNumber, double tArray[]){
    for(int i = 7 * (weekNumber - 1); i < 7 * weekNumber; i++){
        cout<<celciusToFarenheit(tArray[i])<<" ";
    }
    // double farenheit = (celcius * 1.8) + 32;
    // return farenheit;
}

double averageOfWeek(int weekNumber, double tArray[]){
    double sum = 0;
    for(int i = 7 * (weekNumber - 1); i < 7 * weekNumber; i++){
        sum += celciusToFarenheit(tArray[i]);
    }
    return sum / 7;
}

int main(){
    int numberOfWeeks;
    cout<<"Put in the number of weeks " << endl;
    cin>>numberOfWeeks;
    int len = 7 * numberOfWeeks;
    double temperature[len];
    int nWeek;
    
    for(int i = 0; i < len; i++){
        double c;
        cin>>c;
        // temperature[i] = celciusToFarenheit(c);
        temperature[i] = c;
        // cout<<temperature[i]<<endl;
    }
    // cout<<"Put in the number of week you want converted ";
    // cin>>nWeek;
    for(nWeek = 1; nWeek <= numberOfWeeks; nWeek++){
        celciusToFarenheitWeek(nWeek, temperature);
        cout<<"average: " << averageOfWeek(nWeek, temperature) << endl;
    }
}