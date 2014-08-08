namespace vulpes
{
    class Type
    : public TypeTraits
    {
        private:
            Boolean is_primitive_flag;
            const PrimitiveType* const primitive_type;
            const Class* const class_type;

        public:
            Type(const PrimitiveType& type);
            Type(const Class& type);
            Type(const Type& type);

            const Class& get_class() const;
            const PrimitiveType& get_primitive_type() const;

            Boolean is_abstract() const;
            Boolean is_primitive() const;
            Boolean is_class() const;
            Boolean is_char() const;
            Boolean is_short() const;
            Boolean is_int() const;
            Boolean is_long() const;
            Boolean is_int64() const;
            Boolean is_long_long_int() const;
            Boolean is_float() const;
            Boolean is_double() const;
            Boolean is_void() const;
            Boolean is_wchar_t() const;
            Boolean is_signed_char() const;
            Boolean is_signed_short() const;
            Boolean is_signed_int() const;
            Boolean is_signed_long() const;
            Boolean is_signed_int64() const;
            Boolean is_signed_long_long_int() const;
            Boolean is_unsigned_char() const;
            Boolean is_unsigned_short() const;
            Boolean is_unsigned_int() const;
            Boolean is_unsigned_long() const;
            Boolean is_unsigned_int64() const;
            Boolean is_unsigned_long_long_int() const;
    };
}
