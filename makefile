# Tên chương trình cuối cùng sẽ được tạo ra
TARGET = main

# C++ compiler
CXX = g++

# Các flag biên dịch
CXXFLAGS = -std=c++11 -Wall

# Các file nguồn
SRCS = main.cpp book.cpp digitalBook.cpp library.cpp

# Các file đối tượng (object files)
OBJS = $(SRCS:.cpp=.o)

# Quy tắc mặc định để biên dịch chương trình
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Quy tắc để biên dịch các file .cpp thành .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Quy tắc để xóa các file đối tượng và chương trình
clean:
	rm -f $(OBJS) $(TARGET)

# Quy tắc để tạo lại chương trình từ đầu
rebuild: clean $(TARGET)

run: $(TARGET)
	./$(TARGET)
