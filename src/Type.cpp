#include "vulpes.hpp"

namespace vulpes
{
    Type::Type(const PrimitiveType& other)
    : is_primitive_flag(true), primitive_type(&other), class_type(NULL)
    {

    }

    Type::Type(const Class& other)
    : is_primitive_flag(true), primitive_type(NULL), class_type(&other)
    {

    }

    Type::Type(const Type& other)
    : is_primitive_flag(other.is_primitive_flag), primitive_type(other.primitive_type), class_type(other.class_type)
    {

    }
}
