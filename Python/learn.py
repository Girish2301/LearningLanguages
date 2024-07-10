import string
import base64
import useful_functions as uf

global india
x: object
x = 10
# strings
print(7 / 2, "\n")
print(type("12"), "\n")
print(type("hippo*12"), "\n")
print("chime gen".title(), "\n")
print("kurama has {} tails".format(9), "\n")
print("kakashi Ha take".islower(), "\n")
new_str = "The cow jumped over the moon."
print(new_str.split('.'), "\n")
print(new_str.index("The"), "\n")
print(new_str.index("over"), "\n")
print(len("girish"), "\n")
# list
fruit = ["apple", "banana", "orange", "grapefruit", "orange", "pineapple"]
# tuples
dimensions = 52, 40, 100
length, width, height = dimensions
print("The dimensions are {} x {} x {}".format(length, width, height), "\n")
# sets
set_of_fruits = set(fruit)
set_of_fruits.add("mango")
print(fruit, "\n")
print(set_of_fruits, "\n")
set_of_fruits.pop()
print(set_of_fruits, "\n")
print("banana" in set_of_fruits)
# dictionaries
dictar = {"pubg": "mortal", "call of duty": "ninja", "brawl stars": "lex", "dragon raja": "chime"}
print(dictar, "\n")
print("dragon raja" in dictar, "\n")
print(dictar.get("brawl stars"), "\n")
# compound data structures
elements = {"hydrogen": {"number": 1,
                         "weight": 1.00794,
                         "symbol": "H"},
            "helium": {"number": 2,
                       "weight": 4.002602,
                       "symbol": "He"}}
print(elements["hydrogen"]["symbol"], "\n")
print("elements:", elements)
verse_dict = {'if': 3, 'you': 6, 'can': 3, 'keep': 1, 'your': 1, 'head': 1, 'when': 2, 'all': 2, 'about': 2, 'are': 1,
              'losing': 1, 'theirs': 1, 'and': 3, 'blaming': 1, 'it': 1, 'on': 1, 'trust': 1, 'yourself': 1, 'men': 1,
              'doubt': 1, 'but': 1, 'make': 1, 'allowance': 1, 'for': 1, 'their': 1, 'doubting': 1, 'too': 3, 'wait': 1,
              'not': 1, 'be': 1, 'tired': 1, 'by': 1, 'waiting': 1, 'or': 2, 'being': 2, 'lied': 1, 'don\'t': 3,
              'deal': 1, 'in': 1, 'lies': 1, 'hated': 1, 'give': 1, 'way': 1, 'to': 1, 'hating': 1, 'yet': 1, 'look': 1,
              'good': 1, 'nor': 1, 'talk': 1, 'wise': 1}
print(verse_dict, '\n')
print("\n")

# find number of unique keys in the dictionary
num_keys = verse_dict.keys()
print(num_keys, "\n")

# find whether 'breathe' is a key in the dictionary
contains_breathe = verse_dict.get("breathe")
print(contains_breathe, "\n")

# create and sort a list of the dictionary's keys
List = list(num_keys)
sorted_keys = sorted(List)
print(type(List), "\n")
print(sorted_keys[0], "\n")

print(sorted_keys[-1], "\n")

# conditional statements
answer = 69
guess = 34  # int(input())
result: string = 0
if guess < answer:
    # noinspection PyRedeclaration
    result = "Oops!  Your guess was too low."
elif guess > answer:
    result = "Oops!  Your guess was too high."
elif guess == answer:
    result = "Nice!  Your guess matched the answer!"

print(result, "\n")
# functions
egg_count = 0
# def buy_eggs(): #python doesn't allow functions to change the value of global variables
# infact it gives unbound-local Error to them
#   egg_count += 12  # purchase a dozen eggs
# buy_eggs()
str1 = 'Functions are important programming concepts.'


def print_fn():
    print(str1)


print_fn()
print("\n")


def readable_timedelta(days):
    weeks = days // 7
    """They are 7 days in a week so by dividing days by 7 we get week
    """
    remainder = days % 7
    """% is used to get remaining days """
    return "{} week(s) and {} day(s)".format(weeks, remainder)


print(readable_timedelta(69), "\n")

# lambda expressions are anonymous and short functions
total_bats_left = lambda ball, bats: (bats + ball) - ball * 1.5
print(total_bats_left(10, 6), "\n")
# lambda and map()
numbers = [
    [34, 63, 88, 71, 29],
    [90, 78, 51, 27, 45],
    [63, 37, 85, 46, 22],
    [51, 22, 34, 11, 18]
]

averages = list(map(lambda num_list: sum(num_list) / len(num_list), numbers))
print("averages:", averages, "\n")
# lambda and filter()
cities = ["New York City", "Los Angeles", "Chicago", "Mountain View", "Denver", "Boston"]

short_cities = list(filter(lambda name: len(name) < 10, cities))
print(short_cities, "\n")

# for loop
names = ["Joey Tribbiani", "Monica Geller", "Chandler Bing", "Phoebe Buffay"]
usernames = []

for namer in names:
    usernames.append(namer.lower().replace(" ", "_"))

print(usernames, "\n")

# dictionary and loops
cast = {
    "Jerry Seinfeld": "Jerry Seinfeld",
    "Julia Louis-Dreyfus": "Elaine Benes",
    "Jason Alexander": "George Costanza",
    "Michael Richards": "Cosmo Kramer"
}
for key, value in cast.items():
    print("Actor: {}    Role: {}".format(key, value))
print("\n")

how_many_snakes = 1
snake_string = """
             ____
            / . .\\
            \  ---<
             \  /
   __________/ /
-=:___________/
Girish ka saanp :)
"""

print(snake_string * how_many_snakes, '\n')
print(eval('12*2-1'), "\n")
print(type(eval('12*2-1')), "\n")

namestu = ['ram', "shyam", 'balram']  # get and process input for a list of names
assignments = [1, 2, 4, 5]  # get and process input for a list of the number of assignments
grades = ['A', 'B', 'S']  # get and process input for a list of grades

# message string to be used for each student
# HINT: use .format() with this string in your for loop
message = 'Hi {},\n\nThis is a reminder that you have {} assignments left to \ submit before you can graduate.\n ' \
          'You\'re current grade is {} and can increase \ to {} \n' \
          'if you submit all assignments before the due date.\n'.format(namestu, sum(assignments), grades[0],
                                                                        grades[2])

print(message)
# break and continue statements
manifest = [("bananas", 15), ("mattresses", 24), ("dog kennels", 42), ("machine", 120), ("cheeses", 5)]

# the code breaks the loop when weight exceeds or reaches the limit
print("METHOD 1")
weight = 0
items = []
for cargo_name, cargo_weight in manifest:
    print("current weight: {}".format(weight))
    if weight >= 100:
        print("  breaking loop now!")
        break
    else:
        print("  adding {} ({})".format(cargo_name, cargo_weight))
        items.append(cargo_name)
        weight += cargo_weight

print("\nFinal Weight: {}".format(weight))
print("Final Items: {}".format(items))

# skips an iteration when adding an item would exceed the limit
# breaks the loop if weight is exactly the value of the limit
print("\nMETHOD 2")
weight = 0
items = []
for cargo_name, cargo_weight in manifest:
    print("current weight: {}".format(weight))
    if weight >= 100:
        print("  breaking from the loop now!")
        break
    elif weight + cargo_weight > 100:
        print("  skipping {} ({})".format(cargo_name, cargo_weight))
        continue
    else:
        print("  adding {} ({})".format(cargo_name, cargo_weight))
        items.append(cargo_name)
        weight += cargo_weight

print("\nFinal Weight: {}".format(weight))
print("Final Items: {}".format(items))

# HINT: modify the headlines list to verify your loop works with different inputs
headlines = ["Local Bear Eaten by Man",
             "Legislature Announces New Laws",
             "Peasant Discovers Violence Inherent in System",
             "Cat Rescues Fireman Stuck in Tree",
             "Brave Knight Runs Away",
             "Papperbok Review: Totally Triffic"]

news_ticker = ""
# write your loop here
for i in headlines:
    news_ticker += i + " "
    if len(news_ticker) >= 140:
        news_ticker = news_ticker[:140]
        break

print(news_ticker)
# prime no. function
check_prime = [26, 39, 51, 53, 57, 79, 85]
i = 0
for num in check_prime:

    # search for factors, iterating through numbers ranging from 2 to the number itself
    for i in range(2, num):

        # number is not prime if modulo is 0
        if (num % i) == 0:
            print("{} is NOT a prime number, because {} is a factor of {}".format(num, i, num))
            break

        # otherwise, keep checking until we've searched all possible factors, and then declare it prime
        if i == num - 1:
            print("{} IS a prime number".format(num))
# zip and enumerate
letters = ['a', 'b', 'c']
nums = [1, 2, 3]

for letter, num in zip(letters, nums):
    print("{}: {}".format(letter, num))
# unzipping
some_list = [('a', 1), ('b', 2), ('c', 3)]
letters, nums = zip(*some_list)
# indexing using enumerate function
letters3 = ['a', 'b', 'c', 'd', 'e']
for i, letter in enumerate(letters3):
    print(i, letter)

x_coord = [23, 53, 2, -12, 95, 103, 14, -5]
y_coord = [677, 233, 405, 433, 905, 376, 432, 445]
z_coord = [4, 16, -6, -42, 3, -6, 23, -1]
labels = ["F", "J", "A", "Q", "Y", "B", "W", "X"]

points = []

for point in zip(labels, x_coord, y_coord, z_coord):
    points.append("{}: {}, {}, {}".format(*point))

for point in points:
    print(point)

cast_names = ["Barney", "Robin", "Ted", "Lily", "Marshall"]
cast_heights = [72, 68, 72, 66, 76]
cast = dict(zip(cast_names, cast_heights))

print(cast)

cast = (("Barney", 72), ("Robin", 68), ("Ted", 72), ("Lily", 66), ("Marshall", 76))

# define names and heights here
names, heights = zip(*cast)

print(names)
print(heights)

# transposing using zip()
data = ((0, 1, 2), (3, 4, 5), (6, 7, 8), (9, 10, 11))

data_transpose = tuple(zip(*data))
print(data_transpose)

cast = ["Barney Stinson", "Robin Scherbatsky", "Ted Mosby", "Lily Aldrin", "Marshall Eriksen"]
heights = [72, 68, 72, 66, 76]

# write your for loop here
for i, casts in enumerate(cast):
    cast[i] = casts + " " + str(heights[i])

print(cast)
# list comprehensions
city = {"new delhi", "mumbai", "punjab"}
capitalized_cities = [city.title() for city in cities]

squares = [fg ** 2 if fg % 2 == 0 else fg + 3 for fg in range(9)]

names = ["Rick Sanchez", "Morty Smith", "Summer Smith", "Jerry Smith", "Beth Smith"]
first_names = [name.split()[0].lower() for name in names]
print(first_names)

multiples_3 = [multiple * 3 for multiple in range(1, 21)]
print(multiples_3)

scores = {
    "Rick Sanchez": 70,
    "Morty Smith": 35,
    "Summer Smith": 82,
    "Jerry Smith": 23,
    "Beth Smith": 98
}

passed = [name for name, score in scores.items() if score >= 65]
print(passed)

nominated = {1931: ['Norman Taurog', 'Wesley Ruggles', 'Clarence Brown', 'Lewis Milestone', 'Josef Von Sternberg'],
             1932: ['Frank Borzage', 'King Vidor', 'Josef Von Sternberg'],
             1933: ['Frank Lloyd', 'Frank Capra', 'George Cukor'],
             1934: ['Frank Capra', 'Victor Schertzinger', 'W. S. Van Dyke'],
             1935: ['John Ford', 'Michael Curtiz', 'Henry Hathaway', 'Frank Lloyd'],
             1936: ['Frank Capra', 'William Wyler', 'Robert Z. Leonard', 'Gregory La Cava', 'W. S. Van Dyke'],
             1937: ['Leo McCarey', 'Sidney Franklin', 'William Dieterle', 'Gregory La Cava', 'William Wellman'],
             1938: ['Frank Capra', 'Michael Curtiz', 'Norman Taurog', 'King Vidor', 'Michael Curtiz'],
             1939: ['Sam Wood', 'Frank Capra', 'John Ford', 'William Wyler', 'Victor Fleming'],
             1940: ['John Ford', 'Sam Wood', 'William Wyler', 'George Cukor', 'Alfred Hitchcock'],
             1941: ['John Ford', 'Orson Welles', 'Alexander Hall', 'William Wyler', 'Howard Hawks'],
             1942: ['Sam Wood', 'Mervyn LeRoy', 'John Farrow', 'Michael Curtiz', 'William Wyler'],
             1943: ['Michael Curtiz', 'Ernst Lubitsch', 'Clarence Brown', 'George Stevens', 'Henry King'],
             1944: ['Leo McCarey', 'Billy Wilder', 'Otto Preminger', 'Alfred Hitchcock', 'Henry King'],
             1945: ['Billy Wilder', 'Leo McCarey', 'Clarence Brown', 'Jean Renoir', 'Alfred Hitchcock'],
             1946: ['David Lean', 'Frank Capra', 'Robert Siodmak', 'Clarence Brown', 'William Wyler'],
             1947: ['Elia Kazan', 'Henry Koster', 'Edward Dmytryk', 'George Cukor', 'David Lean'],
             1948: ['John Huston', 'Laurence Olivier', 'Jean Negulesco', 'Fred Zinnemann', 'Anatole Litvak'],
             1949: ['Joseph L. Mankiewicz', 'Robert Rossen', 'William A. Wellman', 'Carol Reed', 'William Wyler'],
             1950: ['Joseph L. Mankiewicz', 'John Huston', 'George Cukor', 'Billy Wilder', 'Carol Reed'],
             1951: ['George Stevens', 'John Huston', 'Vincente Minnelli', 'William Wyler', 'Elia Kazan'],
             1952: ['John Ford', 'Joseph L. Mankiewicz', 'Cecil B. DeMille', 'Fred Zinnemann', 'John Huston'],
             1953: ['Fred Zinnemann', 'Charles Walters', 'William Wyler', 'George Stevens', 'Billy Wilder'],
             1954: ['Elia Kazan', 'George Seaton', 'William Wellman', 'Alfred Hitchcock', 'Billy Wilder'],
             1955: ['Delbert Mann', 'John Sturges', 'Elia Kazan', 'Joshua Logan', 'David Lean'],
             1956: ['George Stevens', 'Michael Anderson', 'William Wyler', 'Walter Lang', 'King Vidor'],
             1957: ['David Lean', 'Mark Robson', 'Joshua Logan', 'Sidney Lumet', 'Billy Wilder'],
             1958: ['Richard Brooks', 'Stanley Kramer', 'Robert Wise', 'Mark Robson', 'Vincente Minnelli'],
             1959: ['George Stevens', 'Fred Zinnemann', 'Jack Clayton', 'Billy Wilder', 'William Wyler'],
             1960: ['Billy Wilder', 'Jules Dassin', 'Alfred Hitchcock', 'Jack Cardiff', 'Fred Zinnemann'],
             1961: ['J. Lee Thompson', 'Robert Rossen', 'Stanley Kramer', 'Federico Fellini', 'Robert Wise',
                    'Jerome Robbins'],
             1962: ['David Lean', 'Frank Perry', 'Pietro Germi', 'Arthur Penn', 'Robert Mulligan'],
             1963: ['Elia Kazan', 'Otto Preminger', 'Federico Fellini', 'Martin Ritt', 'Tony Richardson'],
             1964: ['George Cukor', 'Peter Glenville', 'Stanley Kubrick', 'Robert Stevenson', 'Michael Cacoyannis'],
             1965: ['William Wyler', 'John Schlesinger', 'David Lean', 'Hiroshi Teshigahara', 'Robert Wise'],
             1966: ['Fred Zinnemann', 'Michelangelo Antonioni', 'Claude Lelouch', 'Richard Brooks', 'Mike Nichols'],
             1967: ['Arthur Penn', 'Stanley Kramer', 'Richard Brooks', 'Norman Jemison', 'Mike Nichols'],
             1968: ['Carol Reed', 'Gillo Pontecorvo', 'Anthony Harvey', 'Franco Zeffirelli', 'Stanley Kubrick'],
             1969: ['John Schlesinger', 'Arthur Penn', 'George Roy Hill', 'Sydney Pollack', 'Costa-Gavras'],
             1970: ['Franklin J. Schaffner', 'Federico Fellini', 'Arthur Hiller', 'Robert Altman', 'Ken Russell'],
             1971: ['Stanley Kubrick', 'Norman Jewison', 'Peter Bogdanovich', 'John Schlesinger', 'William Friedkin'],
             1972: ['Bob Fosse', 'John Boorman', 'Jan Troell', 'Francis Ford Coppola', 'Joseph L. Mankiewicz'],
             1973: ['George Roy Hill', 'George Lucas', 'Ingmar Bergman', 'William Friedkin', 'Bernardo Bertolucci'],
             1974: ['Francis Ford Coppola', 'Roman Polanski', 'Francois Truffaut', 'Bob Fosse', 'John Cassavetes'],
             1975: ['Federico Fellini', 'Stanley Kubrick', 'Sidney Lumet', 'Robert Altman', 'Milos Forman'],
             1976: ['Alan J. Pakula', 'Ingmar Bergman', 'Sidney Lumet', 'Lina Wertmuller', 'John G. Avildsen'],
             1977: ['Steven Spielberg', 'Fred Zinnemann', 'George Lucas', 'Herbert Ross', 'Woody Allen'],
             1978: ['Hal Ashby', 'Warren Beatty', 'Buck Henry', 'Woody Allen', 'Alan Parker', 'Michael Cimino'],
             1979: ['Bob Fosse', 'Francis Coppola', 'Peter Yates', 'Edouard Molinaro', 'Robert Benton'],
             1980: ['David Lynch', 'Martin Scorsese', 'Richard Rush', 'Roman Polanski', 'Robert Redford'],
             1981: ['Louis Malle', 'Hugh Hudson', 'Mark Rydell', 'Steven Spielberg', 'Warren Beatty'],
             1982: ['Wolfgang Petersen', 'Steven Spielberg', 'Sydney Pollack', 'Sidney Lumet', 'Richard Attenborough'],
             1983: ['Peter Yates', 'Ingmar Bergman', 'Mike Nichols', 'Bruce Beresford', 'James L. Brooks'],
             1984: ['Woody Allen', 'Roland Joffe', 'David Lean', 'Robert Benton', 'Milos Forman'],
             1985: ['Hector Babenco', 'John Huston', 'Akira Kurosawa', 'Peter Weir', 'Sydney Pollack'],
             1986: ['David Lynch', 'Woody Allen', 'Roland Joffe', 'James Ivory', 'Oliver Stone'],
             1987: ['Bernardo Bertolucci', 'Adrian Lyne', 'John Boorman', 'Norman Jewison', 'Lasse Hallstrom'],
             1988: ['Barry Levinson', 'Charles Crichton', 'Martin Scorsese', 'Alan Parker', 'Mike Nichols'],
             1989: ['Woody Allen', 'Peter Weir', 'Kenneth Branagh', 'Jim Sheridan', 'Oliver Stone'],
             1990: ['Francis Ford Coppola', 'Martin Scorsese', 'Stephen Frears', 'Barbet Schroeder', 'Kevin Costner'],
             1991: ['John Singleton', 'Barry Levinson', 'Oliver Stone', 'Ridley Scott', 'Jonathan Demme'],
             1992: ['Clint Eastwood', 'Neil Jordan', 'James Ivory', 'Robert Altman', 'Martin Brest'],
             1993: ['Jim Sheridan', 'Jane Camping', 'James Ivory', 'Robert Altman', 'Steven Spielberg'],
             1994: ['Woody Allen', 'Quentin Tarantino', 'Robert Redford', 'Krzysztof Kieslowski', 'Robert Zemeckis'],
             1995: ['Chris Noonan', 'Tim Robbins', 'Mike Figgis', 'Michael Radford', 'Mel Gibson'],
             1996: ['Anthony Minghella', 'Joel Coen', 'Milos Forman', 'Mike Leigh', 'Scott Hicks'],
             1997: ['Peter Cattaneo', 'Gus Van Sant', 'Curtis Hanson', 'Atom Egoyan', 'James Cameron'],
             1998: ['Roberto Benigni', 'John Madden', 'Terrence Malick', 'Peter Weir', 'Steven Spielberg'],
             1999: ['Spike Jonze', 'Lasse Hallstrom', 'Michael Mann', 'M. Night Malayan', 'Sam Mendes'],
             2000: ['Stephen Daldry', 'Ang Lee', 'Steven Soderbergh', 'Ridley Scott', 'Steven Soderbergh'],
             2001: ['Ridley Scott', 'Robert Altman', 'Peter Jackson', 'David Lynch', 'Ron Howard'],
             2002: ['Rob Marshall', 'Martin Scorsese', 'Stephen Daldry', 'Pedro Almodovar', 'Roman Polanski'],
             2003: ['Fernando Meirelles', 'Sofia Coppola', 'Peter Weir', 'Clint Eastwood', 'Peter Jackson'],
             2004: ['Martin Scorsese', 'Taylor Hackford', 'Alexander Payne', 'Mike Leigh', 'Clint Eastwood'],
             2005: ['Ang Lee', 'Bennett Miller', 'Paul Haggis', 'George Clooney', 'Steven Spielberg'],
             2006: ['Alejandro Gonzaalez Inarritu', 'Clint Eastwood', 'Stephen Frears', 'Paul Greengrass',
                    'Martin Scorsese'],
             2007: ['Julian Schnabel', 'Jason Reitman', 'Tony Gilroy', 'Paul Thomas Anderson', 'Joel Coen',
                    'Ethan Coen'],
             2008: ['David Fincher', 'Ron Howard', 'Gus Van Sant', 'Stephen Daldry', 'Danny Boyle'],
             2009: ['James Cameron', 'Quentin Tarantino', 'Lee Daniels', 'Jason Reitman', 'Kathryn Bigelow'],
             2010: ['Darren Aronofsky', 'David O. Russell', 'David Fincher', 'Ethan Coen', 'Joel Coen', 'Tom Hooper']}
winners = {1931: ['Norman Taurog'], 1932: ['Frank Borzage'], 1933: ['Frank Lloyd'], 1934: ['Frank Capra'],
           1935: ['John Ford'], 1936: ['Frank Capra'], 1937: ['Leo McCarey'], 1938: ['Frank Capra'],
           1939: ['Victor Fleming'], 1940: ['John Ford'], 1941: ['John Ford'], 1942: ['William Wyler'],
           1943: ['Michael Curtiz'], 1944: ['Leo McCarey'], 1945: ['Billy Wilder'], 1946: ['William Wyler'],
           1947: ['Elia Kazan'], 1948: ['John Huston'], 1949: ['Joseph L. Mankiewicz'], 1950: ['Joseph L. Mankiewicz'],
           1951: ['George Stevens'], 1952: ['John Ford'], 1953: ['Fred Zinnemann'], 1954: ['Elia Kazan'],
           1955: ['Delbert Mann'], 1956: ['George Stevens'], 1957: ['David Lean'], 1958: ['Vincente Minnelli'],
           1959: ['William Wyler'], 1960: ['Billy Wilder'], 1961: ['Jerome Robbins', 'Robert Wise'],
           1962: ['David Lean'], 1963: ['Tony Richardson'], 1964: ['George Cukor'], 1965: ['Robert Wise'],
           1966: ['Fred Zinnemann'], 1967: ['Mike Nichols'], 1968: ['Carol Reed'], 1969: ['John Schlesinger'],
           1970: ['Franklin J. Schaffner'], 1971: ['William Friedkin'], 1972: ['Bob Fosse'], 1973: ['George Roy Hill'],
           1974: ['Francis Ford Coppola'], 1975: ['Milos Forman'], 1976: ['John G. Avildsen'], 1977: ['Woody Allen'],
           1978: ['Michael Cimino'], 1979: ['Robert Benton'], 1980: ['Robert Redford'], 1981: ['Warren Beatty'],
           1982: ['Richard Attenborough'], 1983: ['James L. Brooks'], 1984: ['Milos Forman'], 1985: ['Sydney Pollack'],
           1986: ['Oliver Stone'], 1987: ['Bernardo Bertolucci'], 1988: ['Barry Levinson'], 1989: ['Oliver Stone'],
           1990: ['Kevin Costner'], 1991: ['Jonathan Demme'], 1992: ['Clint Eastwood'], 1993: ['Steven Spielberg'],
           1994: ['Robert Zemeckis'], 1995: ['Mel Gibson'], 1996: ['Anthony Minghella'], 1997: ['James Cameron'],
           1998: ['Steven Spielberg'], 1999: ['Sam Mendes'], 2000: ['Steven Soderbergh'], 2001: ['Ron Howard'],
           2002: ['Roman Polanski'], 2003: ['Peter Jackson'], 2004: ['Clint Eastwood'], 2005: ['Ang Lee'],
           2006: ['Martin Scorsese'], 2007: ['Ethan Coen', 'Joel Coen'], 2008: ['Danny Boyle'],
           2009: ['Kathryn Bigelow'], 2010: ['Tom Hooper']}

# Question 1A: Create dictionary with the count of Oscar nominations for each director
nom_count_dict = {}
for year, list_dir in nominated.items():
    for director in list_dir:
        if director not in nom_count_dict:
            nom_count_dict[director] = 1
        else:
            nom_count_dict[director] += 1

print("nom_count_dict = {}\n".format(nom_count_dict))
###################################################################################################################
###################################################################################################################

# Question 1B: Create dictionary with the count of Oscar wins for each director
win_count_dict = {}
# Add your solution code below before line 20. Add more lines for your code as needed.
for year, winnerlist in winners.items():
    for winner in winnerlist:
        win_count_dict[winner] = win_count_dict.get(winner, 0) + 1
print("win_count_dict = {}".format(win_count_dict))

winners = {1931: ['Norman Taurog'], 1932: ['Frank Borzage'], 1933: ['Frank Lloyd'], 1934: ['Frank Capra'],
           1935: ['John Ford'], 1936: ['Frank Capra'], 1937: ['Leo McCarey'], 1938: ['Frank Capra'],
           1939: ['Victor Fleming'], 1940: ['John Ford'], 1941: ['John Ford'], 1942: ['William Wyler'],
           1943: ['Michael Curtiz'], 1944: ['Leo McCarey'], 1945: ['Billy Wilder'], 1946: ['William Wyler'],
           1947: ['Elia Kazan'], 1948: ['John Huston'], 1949: ['Joseph L. Mankiewicz'], 1950: ['Joseph L. Mankiewicz'],
           1951: ['George Stevens'], 1952: ['John Ford'], 1953: ['Fred Zinnemann'], 1954: ['Elia Kazan'],
           1955: ['Delbert Mann'], 1956: ['George Stevens'], 1957: ['David Lean'], 1958: ['Vincente Minnelli'],
           1959: ['William Wyler'], 1960: ['Billy Wilder'], 1961: ['Jerome Robbins', 'Robert Wise'],
           1962: ['David Lean'], 1963: ['Tony Richardson'], 1964: ['George Cukor'], 1965: ['Robert Wise'],
           1966: ['Fred Zinnemann'], 1967: ['Mike Nichols'], 1968: ['Carol Reed'], 1969: ['John Schlesinger'],
           1970: ['Franklin J. Schaffner'], 1971: ['William Friedkin'], 1972: ['Bob Fosse'], 1973: ['George Roy Hill'],
           1974: ['Francis Ford Coppola'], 1975: ['Milos Forman'], 1976: ['John G. Avildsen'], 1977: ['Woody Allen'],
           1978: ['Michael Cimino'], 1979: ['Robert Benton'], 1980: ['Robert Redford'], 1981: ['Warren Beatty'],
           1982: ['Richard Attenborough'], 1983: ['James L. Brooks'], 1984: ['Milos Forman'], 1985: ['Sydney Pollack'],
           1986: ['Oliver Stone'], 1987: ['Bernardo Bertolucci'], 1988: ['Barry Levinson'], 1989: ['Oliver Stone'],
           1990: ['Kevin Costner'], 1991: ['Jonathan Demme'], 1992: ['Clint Eastwood'], 1993: ['Steven Spielberg'],
           1994: ['Robert Zemeckis'], 1995: ['Mel Gibson'], 1996: ['Anthony Minghella'], 1997: ['James Cameron'],
           1998: ['Steven Spielberg'], 1999: ['Sam Mendes'], 2000: ['Steven Soderbergh'], 2001: ['Ron Howard'],
           2002: ['Roman Polanski'], 2003: ['Peter Jackson'], 2004: ['Clint Eastwood'], 2005: ['Ang Lee'],
           2006: ['Martin Scorsese'], 2007: ['Ethan Coen', 'Joel Coen'], 2008: ['Danny Boyle'],
           2009: ['Kathryn Bigelow'], 2010: ['Tom Hooper']}

# For Question 2: Please provide a list with the name(s) of the director(s) with
# the most Oscar wins. The list can hold the names of multiple directors,
# since there can be more than 1 director tied with the most Oscar wins.
win_count_dict = {}
most_win_director = []
# Add your code here
for year, winnerlist in winners.items():
    for winner in winnerlist:
        win_count_dict[winner] = win_count_dict.get(winner, 0) + 1
highest_count = max(win_count_dict.values())

most_win_director = [key for key, value in win_count_dict.items() if value == highest_count]

print("most_win_director = {}".format(most_win_director))

# reading and writing files
f = open("D:/code/luv_cpp.cpp", 'r')
file_data = f.read()
# print(file_data)
f.close()
# OR
with open("D:/code/luv_cpp.cpp") as rea:
    rea.read()
with open("C:/Users/girish/Documents/python programming/camelot.txt") as song:
    print(song.read(2))
    print(song.read(8))
    print(song.read())

scores = [88, 92, 79, 93, 85]

mean = uf.mean(scores)
curved = uf.add_five(scores)

mean_c = uf.mean(curved)

print("Scores:", scores)
print("Original Mean:", mean, " New Mean:", mean_c)

print(__name__)
print(uf.__name__)


# iterators and generators
def my_range(xas):  # generator
    ios = 0
    while ios < xas:
        yield ios
        ios += 1


for xa in my_range(7):  # iterator
    print(xa)

lessons = ["Why Python Programming", "Data Types and Operators", "Control Flow", "Functions", "Scripting"]


def my_enumerate(iterable, start=0):
    # Implement your generator function here
    count = start
    for item in iterable:
        yield count, item
        count += 1


for i, lesson in my_enumerate(lessons, 1):
    print("Lesson {}: {}".format(i, lesson))


def chunker(iterable, size):
    for chunky in range(0, len(iterable), size):
        yield iterable[chunky:chunky + size]


for chunk in chunker(range(25), 4):
    print(list(chunk))

# generator expressions
sq_list = [xos ** 2 for xos in range(10)]  # this produces a list of squares

sq_iterator = (xos ** 2 for xos in range(10))  # this produces an iterator of squares

Strrr = " O4FVp_Pelcgb_p5nyyratr"

print("Encoded String: " + Strrr)
print("Decoded String: " + base64.b64decode(Strrr))
print("hello world")
