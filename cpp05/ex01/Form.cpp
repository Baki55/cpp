#include "Form.hpp"

Form::Form(const std::string name, int gradeToSign, int gradeToExec): name(name), gradeToSign(gradeToSign), gradeToExec(getGradeToExec), isSigned(0)
{
	if(gradeToSign < 1)
		throw Form::GradeTooHighException();
	else if(gradeToSign > 150)
		throw Form::GradeTooLowException();
	if(gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if(gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &rhs): name(rhs.getName()), isSigned(rhs.getIsSigned()), gradeToSign(rhs.gradeToSign()), gradeToExec(rhs.gradeToExec()) {}

Form &operator=(const Form &rhs)
{
	this.name = rhs.getName();
	this.isSigned = rhs.getIsSigned();
	this.gradeToSign = rhs.gradeToSign();
	this.gradeToExec = rhs.gradeToExec();
	return(*this);
}
std::string Form::getName() const
{
	return(this.name);
}

bool Form::getIsSigned() const
{
	return(isSigned);
}

int Form::getGradeToSign() const
{
	return(gradeToSign);
}

int Form::getGradeToExec() const
{
	return(gradeToExec);
}

void beSigned::Form(const Bureaucrat &bureaucrat)
{
	if(gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	else
		isSigned = 1;
}

std::ostream &operator<<(std::ostream &o, const Form &rhs)
{
	o << "------------- Form Info -------------" << std::endl;
	o << "Form name: " << rhs.getName() << std::endl
	<< "Grade to sign: " << rhs.getGradeToSign() << std::endl
	<< "Grade to execute: " << rhs.getGradeToExecute();
	return(o);
}