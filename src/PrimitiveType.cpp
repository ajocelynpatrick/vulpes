#include "vulpes.hpp"

namespace vulpes
{
    PrimitiveType::PrimitiveType(const Identifier& identifier)
    {
        if(identifier == "int")
        {
            this->type = int_type;
        }
        else if(identifier == "bool")
        {
            this->type = bool_type;
        }
        else if(identifier == "wchar_t")
        {
            this->type = wchar_t_type;
        }
        else if(identifier == "float")
        {
            this->type = float_type;
        }
        else if(identifier == "double")
        {
            this->type = double_type;
        }
        else
        {
            throw new std::invalid_argument(String("'")+String(identifier)+String("' is not a primitive type!"));
        }
    }

    PrimitiveType::PrimitiveType(const PrimitiveType& other)
    : type(other.type)
    {

    }

    Boolean PrimitiveType::is_abstract() const
    {
        return false;
    }

    Boolean PrimitiveType::is_primitive() const
    {
        return true;
    }

    Boolean PrimitiveType::is_class() const
    {
        return false;
    }

    Boolean PrimitiveType::is_char() const
    {
        return (this->type == char_type);
    }

    Boolean PrimitiveType::is_short() const
    {
        return (this->type == short_type);
    }

    Boolean PrimitiveType::is_int() const
    {
        return (this->type == int_type);
    }

    Boolean PrimitiveType::is_long() const
    {
        return (this->type == long_type);
    }

    Boolean PrimitiveType::is_int64() const
    {
        return (this->type == int64_type);
    }

    Boolean PrimitiveType::is_long_long_int() const
    {
        return (this->type == long_long_int_type);
    }

    Boolean PrimitiveType::is_float() const
    {
        return (this->type == float_type);
    }

    Boolean PrimitiveType::is_double() const
    {
        return (this->type == double_type);
    }

    Boolean PrimitiveType::is_void() const
    {
        return (this->type == void_type);
    }

    Boolean PrimitiveType::is_wchar_t() const
    {
        return (this->type == wchar_t_type);
    }

    Boolean PrimitiveType::is_signed_char() const
    {
        return (this->type == signed_char_type);
    }

    Boolean PrimitiveType::is_signed_short() const
    {
        return (this->type == signed_short_type);
    }

    Boolean PrimitiveType::is_signed_int() const
    {
        return (this->type == signed_int_type);
    }

    Boolean PrimitiveType::is_signed_long() const
    {
        return (this->type == signed_long_type);
    }

    Boolean PrimitiveType::is_signed_int64() const
    {
        return (this->type == signed_int64_type);
    }

    Boolean PrimitiveType::is_signed_long_long_int() const
    {
        return (this->type == signed_long_long_int_type);
    }

    Boolean PrimitiveType::is_unsigned_char() const
    {
        return (this->type == unsigned_char_type);
    }

    Boolean PrimitiveType::is_unsigned_short() const
    {
        return (this->type == unsigned_short_type);
    }

    Boolean PrimitiveType::is_unsigned_int() const
    {
        return (this->type == unsigned_int_type);
    }

    Boolean PrimitiveType::is_unsigned_long() const
    {
        return (this->type == unsigned_long_type);
    }

    Boolean PrimitiveType::is_unsigned_int64() const
    {
        return (this->type == unsigned_int64_type);
    }

    Boolean PrimitiveType::is_unsigned_long_long_int() const
    {
        return (this->type == unsigned_long_long_int_type);
    }
}
