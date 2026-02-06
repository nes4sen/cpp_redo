CXX=c++ 
CXXFLAGS=-Wall -Wextra -Werror -std=c++98

SRCS =   PhoneBook.cpp Contact.cpp main.cpp PhoneBookUtils.cpp

OBJS = $(SRCS:.cpp=.o)


NAME = PhoneBook

all:$(NAME)
	
$(NAME):$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
	