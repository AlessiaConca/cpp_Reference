class Car {
public:
  virtual void drive(int carSpeed) = 0;
  virtual void stop() = 0;
  virtual ~Car() {}
};