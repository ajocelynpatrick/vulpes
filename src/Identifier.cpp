#include "vulpes.hpp"

namespace vulpes
{
    Identifier::Identifier(const Identifier& other)
    : string(other.string)
    {

    }

    Identifier::Identifier(const char* other)
    : string(other)
    {

    }

    Identifier::Identifier(const String& other)
    : string(other)
    {

    }

    Identifier::operator const char* () const
    {
        return this->string.c_str();
    }

    Boolean Identifier::operator == (const Identifier& other) const
    {
        return (this->string == other.string);
    }

    Boolean Identifier::operator == (const String& other) const
    {
        return (this->string == other);
    }

    Boolean Identifier::operator == (const char* other) const
    {
        return (this->string == String(other));
    }

    Identifier& Identifier::operator = (const String& other)
    {
        this->string = other;
        return *this;
    }

    Identifier& Identifier::operator = (const Identifier& other)
    {
        this->string = other.string;
        return *this;
    }
}
