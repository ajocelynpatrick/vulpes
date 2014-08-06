namespace vulpes
{
    class Identifier
    {
        private:
            String string;

        public:
            Identifier(const String& identifier);
            Identifier(const char* identifier);
            Identifier(const Identifier& identifier);

            operator const char* () const;
            Boolean operator == (const Identifier& other) const;
            Boolean operator == (const String& other) const;
            Boolean operator == (const char* other) const;

            Identifier& operator = (const String& other);
            Identifier& operator = (const Identifier& other);

    };
}
