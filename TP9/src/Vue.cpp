#include "Controleur.hpp"
#include "Vue.hpp"

#include <iostream>

///////////////////////////////////////
// Vue
///////////////////////////////////////

Vue::Vue(Controleur& controleur) : _controleur(controleur) {}

///////////////////////////////////////
// VueGraphique
///////////////////////////////////////

VueGraphique::VueGraphique(int argc, char ** argv, Controleur & controleur) :
Vue(controleur), _kit(argc, argv) {

	// la fenêtre principale
	_window.set_title("Viewer de bouteilles");
	_window.set_size_request(400, 300);
	_window.set_resizable(false);
	_window.set_border_width(5);

	// ScrolledWindow : la fenêtre avec scrolling contenant le TextView
	_scrolledWindow.add(_textView);
	_scrolledWindow.set_policy(Gtk::POLICY_AUTOMATIC, Gtk::POLICY_AUTOMATIC);
	_box.pack_start(_scrolledWindow);
    _button.set_label("Ouvrir nday fichier ...");
    _button.signal_clicked().connect(
           sigc::mem_fun(*this, &VueGraphique::ouvrirFichier));


    //_button.("ouvrir fichier");
    _box.pack_start(_button,Gtk::PACK_SHRINK);

	_window.add(_box);
	_window.show_all();
}

void VueGraphique::actualiser() {
    //std::string texte = "bloublou";
    // TODO recuperer le vrai texte a afficher
    std::string texte = _controleur.getTexte();
	_textView.get_buffer()->set_text(texte.c_str());
}

void VueGraphique::run() {
	_kit.run(_window);
}

void VueGraphique::ouvrirFichier() {
	Gtk::FileChooserDialog dialog(_window, "Ouvrir fichier...");
	dialog.add_button(Gtk::Stock::CANCEL, Gtk::RESPONSE_CANCEL);
	dialog.add_button(Gtk::Stock::OPEN, Gtk::RESPONSE_OK);
	int ret = dialog.run();
	if (ret == Gtk::RESPONSE_OK) {
		std::string nomFichier = dialog.get_filename();
        std::cout <<"TODO : " << nomFichier<<std::endl;
        _controleur.chargerInventaire(nomFichier);
		// TODO charger les donnees du fichier dans l'inventaire
	}
}

VueConsole::VueConsole(Controleur& controleur) :
    Vue(controleur) {}

void VueConsole::actualiser() {
    //std::string texte = _controleur.getTexte();
    std::cout<< _controleur.getTexte() << std::endl;
}

void VueConsole::run() {

}
