class base
{
string name;
int age;
public:
base(){}
void setname(const string str){
    name=str;
}
void setage(const int _age){
    age=_age;
}
string getname() const{
    return name;
}
int getage() const{
    return age;
}
};
class leader:public base{

};
class engineer:public base{

};
class chairman:public leader,public engineer{
string job,dep,major,prof;
public:
void setname(const string _job){
    leader::setname(_job);
}
void setage(int val){
    leader::setage(val);
}
string getname() const{
    return leader::getname();
}
int getage() const{
    return leader::getage();
}
void setjob(const string _job){
    job=_job;
}
void setdep(const string _dep){
    dep=_dep;
}
void setmajor(const string _major){
    major=_major;
}
void setprof(const string _prof){
    prof=_prof;
}
string getprof() const{
    return prof;
}
string getjob() const{
    return job;
}
string getmajor() const{
    return major;
}
string getdep() const{
    return dep;
}
};