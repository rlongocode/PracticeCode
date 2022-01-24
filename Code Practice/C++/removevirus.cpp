using namespace std;
#include <vector>
#include <string>
#include <array> 
#define Str  string
vector<Str> splitstr(const char* s, const char* pl = ""){ 	
	 vector <Str> final;
   vector<int> found{0};
   for(int i = 0;i<(strlen(s)-strlen(pl)+1);i++ ){
        if(!strcmp((((Str)s).substr(i,strlen(pl))).data(),pl)){
            found.push_back(i);
            found.push_back(i+(strlen(pl)));
        };
    };
  found.push_back(((Str)s).size());
  for(int i = 1;i < found.size();i+=2){
      Str in = ((Str)s).substr(found.at(i-1),found.at(i)-found.at(i-1));
      if(in.size() != 0){
     final.push_back(in);};
  };
  return final;
};
std::string removeVirus(std::string pf) {
	  pf.erase(pf.begin(),pf.begin()+10);
    vector<Str> v = splitstr(pf.data(),", ");
    Str finale = "";
    for(Str w: v){
        if(w.find("antivirus") < w.length() || w.find("notvirus") < w.length() ){
        if(finale.length() > 0){finale+=", ";};finale+=w;continue;};
        if(w.find("virus") < w.length() || w.find("malware") < w.length() ){continue;};
        if(finale.length() > 0){finale+=", ";};finale+=w;
    };
    if(finale.length() == 0){finale ="PC Files: Empty";return finale;}else{return ((const char*)"PC Files: ")+finale;};
}