namespace vulpes
{
    class Type
    : public TypeTraits
    {
        private:
            Boolean is_primitive_flag;
            const PrimitiveType* primitive_type;
            const Class* class_type;

        public:
            Type(const PrimitiveType& type);
            Type(const Class& type);
            Type(const Type& type);
    };
}
