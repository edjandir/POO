#ifndef PEDIDO_H
#define PEDIDO_H


class Pedido
{
    public:
        Pedido(Cliente* cliente, string data);

        Cliente* Getcliente() { return cliente; }
        void Setcliente(Cliente* val) { cliente = val; }
        string Getdata() { return data; }
        void Setdata(string val) { data = val; }
        void inclui_item(PedidoItem* item);

    protected:

    private:
        Cliente* cliente;
        string data;
        vector<PedidoItem> itens;
};

#endif // PEDIDO_H
