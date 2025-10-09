class NetworkConnection {
private:
  int* dataPtr;

public:
  NetworkConnection(bool simulateFailure);
  ~NetworkConnection();
};