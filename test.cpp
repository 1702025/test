#include<iostream>
using namespace std;
class Audioclip
{
private:
  int channels;
  int resolution;
  int samplerate;
  int duration;
public:
  Audioclip()
  {
    channels=1;
    resolution=8;
    samplerate=22050;
  }
  void setter_channels(int chan)
  {
    if(chan==1 || chan==2)
     {
       channels=chan;
     }
    else
    cout<<"invalid data";
  }
  void setter_resolution(int res)
  {
    if(res==8 || res==16 || res==24)
     {
       resolution=res;
     }
     else
     cout<<"invalid data";
  }
  void setter_samplerate(int sam)
  {
    if(sam==22050 || sam==44100 || sam==88200)
     {
       samplerate=sam;
     }
     else
     cout<<"invalid data";
  }
  bool studioquality()
  {
    if(channels==2 && resolution==24 && samplerate==88200)
     {
       return true;
     }
     else
     {
       return false;
     }
  }
  int getter_channels()
  {
     return channels;
  }
  int getter_resolution()
  {
     return resolution;
  }
  int getter_samplerate()
  {
     return samplerate;
  }
  int datasize(int dura)
  {
    int bytes;
    duration=dura;
    bytes=duration*channels*(resolution/8)*samplerate;
    return bytes;
  }
};
int main(int argc, char const *argv[])
{
  int c,r,s,dura;
  Audioclip obj;
  cout<<"channels input"<<endl;
  cin>>c;
  cout<<"resolution input"<<endl;
  cin>>r;
  cout<<"samplerate input"<<endl;
  cin>>s;
  cout<<"duration input"<<endl;
  cin>>dura;
  obj.setter_channels(c);
  cout<<"channels output = "<<obj.getter_channels()<<endl;
  obj.setter_resolution(r);
  cout<<"resolution output = "<<obj.getter_resolution()<<endl;
  obj.setter_samplerate(s);
  cout<<"samplerate output = "<<obj.getter_samplerate()<<endl;
  cout<<"Maximum quality = "<<obj.studioquality()<<endl;
  cout<<"number of bytes = "<<obj.datasize(dura);
  return 0;
}
