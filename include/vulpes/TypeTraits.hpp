namespace vulpes
{
    class TypeTraits
    {
        protected:
            TypeTraits();
            virtual ~TypeTraits();

            enum PrimitiveTypes
            {
                char_type,
                short_type,
                int_type,
                long_type,
                int64_type,
                long_long_int_type,
                float_type,
                double_type,
                void_type,
                wchar_t_type,
                signed_char_type,
                signed_short_type,
                signed_int_type,
                signed_long_type,
                signed_int64_type,
                signed_long_long_int_type,
                unsigned_char_type,
                unsigned_short_type,
                unsigned_int_type,
                unsigned_long_type,
                unsigned_int64_type,
                unsigned_long_long_int_type,
                bool_type
            };

        public:
            virtual Boolean is_abstract() const = 0;
            virtual Boolean is_primitive() const = 0;
            virtual Boolean is_class() const = 0;
            virtual Boolean is_char() const = 0;
            virtual Boolean is_short() const = 0;
            virtual Boolean is_int() const = 0;
            virtual Boolean is_long() const = 0;
            virtual Boolean is_int64() const = 0;
            virtual Boolean is_long_long_int() const = 0;
            virtual Boolean is_float() const = 0;
            virtual Boolean is_double() const = 0;
            virtual Boolean is_void() const = 0;
            virtual Boolean is_wchar_t() const = 0;
            virtual Boolean is_signed_char() const = 0;
            virtual Boolean is_signed_short() const = 0;
            virtual Boolean is_signed_int() const = 0;
            virtual Boolean is_signed_long() const = 0;
            virtual Boolean is_signed_int64() const = 0;
            virtual Boolean is_signed_long_long_int() const = 0;
            virtual Boolean is_unsigned_char() const = 0;
            virtual Boolean is_unsigned_short() const = 0;
            virtual Boolean is_unsigned_int() const = 0;
            virtual Boolean is_unsigned_long() const = 0;
            virtual Boolean is_unsigned_int64() const = 0;
            virtual Boolean is_unsigned_long_long_int() const = 0;
    };
}
