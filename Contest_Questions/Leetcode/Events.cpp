#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    int score = 0, counter = 0;
    string events[n];
    for (int i = 0; i < n; i++)
    {
        cin >> events[i];
    }
    
    int ans[2];
    for (int i = 0; i < n; i++)
    {
        if(events[i] == "0" || events[i] == "1" || events[i] == "2" || events[i] == "3" || events[i] == "4" || events[i] == "6"){
            score += stoi(events[i]);
        }
        else if (events[i] == "W" && counter < 10){
            counter++;
        }
        else if(events[i] == "WD"){
            score++;
        }
        else if(events[i] == "NB"){
            score++;
        }
        if(counter == 10) break;
    }
    ans[0] = score, ans[1] = counter;
    cout << ans[0] << " " << ans[1];
    return 0;
}