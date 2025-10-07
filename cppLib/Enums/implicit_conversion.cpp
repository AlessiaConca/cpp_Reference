enum DaysOfWeek {
  SUNDAY,    // 0
  MONDAY,    // 1
  TUESDAY,   // 2
  WEDNESDAY, // 3
  THURSDAY,  // 4
  FRIDAY,    // 5
  SATURDAY   // 6
};


int main() {
    int dayNumber = MONDAY; // Implicitly converts to 1
    int nextDay = dayNumber + 1; // This will work, resulting in 2
}