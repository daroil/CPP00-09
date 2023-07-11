#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm(137, 145, "ShrubberyCreationForm"), _target("You")
{
    std::cout << "The default ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(137, 145, "ShrubberyCreationForm"), _target(target)
{
    std::cout << "The ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ShrubberyCreationForm)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = ShrubberyCreationForm;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &copy) {
    this->_target = copy._target;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "The shrubbery form destroyed" << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (executor.getGrade() > this->getReqGradeExecute())
        throw AForm::GradeTooLowException();
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    else
    {
        std::ofstream	outfile(_target + "_shrubbery");

        if (!outfile) {
            std::cerr << "Error opening the file." << std::endl;
            return ;
        }

        // File is open, you can now read from it or perform other operations

        outfile << "            .        +          .      .          .\n"
        "     .            _        .                    .\n"
        "  ,              /;-._,-.____        ,-----.__\n"
        " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,\n"
        "  `                 \\   _|`\"=:_::.`.);  \\ __/ /\n"
        "                      ,    `./  \\:. `.   )==-'  .\n"
        "    .      ., ,-=-.  ,\\, +#./`   \\:.  / /           .\n"
        ".           \\/:/`-' , ,\\ '` ` `   ): , /_  -o\n"
        "       .    /:+- - + +- : :- + + -:'  /(o-) \\)     .\n"
        "  .      ,=':  \\    ` `/` ' , , ,:' `'--\".--\"---._/`7\n"
        "   `.   (    \\: \\,-._` ` + '\\, ,\"   _,--._,---\":.__/\n"
        "              \\:  `  X` _| _,\\/'   .-'\n"
        ".               \":._:`\\____  /:'  /      .           .\n"
        "                    \\::.  :\\/:'  /              +\n"
        "   .                 `.:.  /:'  }      .\n"
        "           .           ):_(:;   \\           .\n"
        "                      /:. _/ ,  |\n"
        "                   . (|::.     ,`                  .\n"
        "     .                |::.    {\\\n"
        "                      |::.\\  \\ `.\n"
        "                      |:::(\\    |\n"
        "              O       |:::/{ }  |                  (o\n"
        "               )  ___/#\\::`/ (O \"==._____   O, (O  /`\n"
        "          ~~~w/w~\"~~,\\` `:/,-(~`\"~~~~~~~~\"~o~\\~/~w|/~\n"
        "dew   ~~~~~~~~~~~~~~~~~~~~~~~\\\\W~~~~~~~~~~~~\\|/~~\n"
        "\n"
        "------------------------------------------------\n" << std::endl;


        outfile.close();
    }
}


