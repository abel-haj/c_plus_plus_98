#include "Form.hpp"

Form::Form ( void ) : _() {}

Form::Form ( const Form& instance ) {}

Form& Form::operator= ( const Form& instance ) {}

Form::~Form ( void ) {}

std::ostream& operator<< ( std::ostream& os, const Form& f );
