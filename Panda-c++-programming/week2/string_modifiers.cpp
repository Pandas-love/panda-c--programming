//s=s+t; s+=t; s.append(t); this all can be used for concatetion of two string.
// s.pushback('A'); this function helps to put a single character at the very end of a string.
//s.popback(); this function helps to remove a single character from the very end of a string.
//s="sample"; this use for assigning string. This function we use always. we can use
//s.assign("sampleText") instead of this.
//s.erase(4); & s.earse(4,3); in first one, function will earse all things after index 4. In second term,
//we declare a point where it have to stop.so, after index 4 to next 3 letters, everything will be erased.
//s.replace(4,3,"tomal"); in this case, erase and replace kind of simillar. Here first we have to delete
//then on that place i will put my string.
//s.inset(4,"tomal");// in this case we don't remove or erase anything. we do normal insertion at the given index. 
#include<bits/stdc++.h>
using namespace std;

class myclass
{
    public:
    string s;string t;
    myclass()
    {
        getline(cin,s);
        getline(cin,t);
        cin.ignore();
    }
};
int main()
{
    myclass tomal;
    // tomal.t=tomal.s+tomal.t;
    //tomal.s.append(tomal.t);
    // tomal.s.push_back('t');
    // cout<<tomal.s<<endl;
    // tomal.s.pop_back();tomal.s.pop_back();
    //tomal.s.resize(tomal.s.size()+5,'t');
    //tomal.s.erase(4);//In this case, after index 4 all other character will deleted.
    //tomal.s.erase(4,3);//In this case, after index 4 , three letters will deleted along with index 4.
    //tomal.s.replace(4,3,"tomal");//this is like earse, but there is advantage here we can insert another string.
    //tomal.s.insert(4,"tomal");//In this case, there is no replace here only happen insertion. At the position of 4
    //instead of deleting or removeing elements we will insert a string.That's all. 
    cout<<tomal.s<<endl;
    return 0;
}