namespace vulpes
{
    class Class
    : public TypeTraits
    {
        private:
            String name;
            std::vector<Function> methods;

        public:
            Class(const String& name);

            String get_name() const;


            Class& set_name(const String& name);
            Class& abstract();
    };
}
