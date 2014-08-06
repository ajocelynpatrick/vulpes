namespace vulpes
{
    class Type
    : public TypeTraits
    {
        private:
            Boolean is_primitive;

        public:
            Type(const PrimitiveType& type);
            Type(const Class& type);
            Type(const Type& type);
    };
}
