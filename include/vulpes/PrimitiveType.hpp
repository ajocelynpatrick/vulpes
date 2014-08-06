namespace vulpes
{
    class PrimitiveType
    : public TypeTraits
    {
        private:
            PrimitiveTypes type;

        public:
            PrimitiveType(const Identifier& identifier);
            PrimitiveType(const PrimitiveType& other);

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
