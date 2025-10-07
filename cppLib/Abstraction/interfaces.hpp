// class Interface {   
// public:   
//   virtual void someFunction() = 0;   
//   virtual void anotherFunction() = 0;
//   // More functions
//   virtual ~Interface() {}
// };  


// .hpp file
class Playable {
public:
  virtual void play() = 0;       
  virtual void stop() = 0; 
  virtual ~Playable() {}           
};

// .hpp file
class Recordable {
public:
  virtual void startRecording() = 0; 
  virtual void stopRecording() = 0;  
  virtual ~Recordable() {}        
};

// .hpp file
class AudioTrack : public Playable, public Recordable {   
  void play() override;     
  void stop() override;
  void startRecording() override; 
  void stopRecording() override;   
};   

//implementation of methods would be in a .cpp file

//separate main.cpp file will use the implemented functions

/*
An instance of AudioTrack can be used anywhere that a Playable or Recordable class is expected. 
For example, we can place instances of AudioTrack in a vector of Playable‘s.

Interfaces are a useful tool for  abstraction because they allow developers to focus on what an object does rather than how it does it.
*/
