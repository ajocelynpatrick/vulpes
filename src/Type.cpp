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

    const Class& Type::get_class() const
    {
        if(this->is_class())
        {
            return *this->class_type;
        }
        else
        {
            throw new std::logic_error("Trying to get class type of non class type!");
        }
    }

    const PrimitiveType& Type::get_primitive_type() const
    {
        if(this->is_primitive())
        {
            return *this->primitive_type;
        }
        else
        {
            throw new std::logic_error("Trying to get primitive type of non primitive type!");
        }
    }

    Boolean Type::is_abstract() const
    {
        Boolean final = false;

        if(this->is_class())
        {
            final = this->class_type->is_abstract();
        }

        return final;
    }

    Boolean Type::is_primitive() const
    {
        return this->is_primitive_flag;
    }

    Boolean Type::is_class() const
    {
        return (!this->is_primitive());
    }

    Boolean Type::is_char() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_char();
        }

        return final;
    }

    Boolean Type::is_short() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_short();
        }

        return final;
    }

    Boolean Type::is_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_int();
        }

        return final;
    }

    Boolean Type::is_long() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_long();
        }

        return final;
    }

    Boolean Type::is_int64() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_int64();
        }

        return final;
    }

    Boolean Type::is_long_long_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_long_long_int();
        }

        return final;
    }

    Boolean Type::is_float() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_float();
        }

        return final;
    }

    Boolean Type::is_double() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_double();
        }

        return final;
    }

    Boolean Type::is_void() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_void();
        }

        return final;
    }

    Boolean Type::is_wchar_t() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_wchar_t();
        }

        return final;
    }

    Boolean Type::is_signed_char() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_char();
        }

        return final;
    }

    Boolean Type::is_signed_short() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_short();
        }

        return final;
    }

    Boolean Type::is_signed_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_int();
        }

        return final;
    }

    Boolean Type::is_signed_long() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_long();
        }

        return final;
    }

    Boolean Type::is_signed_int64() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_int64();
        }

        return final;
    }

    Boolean Type::is_signed_long_long_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_signed_long_long_int();
        }

        return final;
    }

    Boolean Type::is_unsigned_char() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_char();
        }

        return final;
    }

    Boolean Type::is_unsigned_short() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_short();
        }

        return final;
    }

    Boolean Type::is_unsigned_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_int();
        }

        return final;
    }

    Boolean Type::is_unsigned_long() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_long();
        }

        return final;
    }

    Boolean Type::is_unsigned_int64() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_int64();
        }

        return final;
    }

    Boolean Type::is_unsigned_long_long_int() const
    {
        Boolean final = false;

        if(this->is_primitive())
        {
            final = this->primitive_type->is_unsigned_long_long_int();
        }

        return final;
    }
}
