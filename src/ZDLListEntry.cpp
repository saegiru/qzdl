#include "ZDLListEntry.hpp"

ZDLListEntry::ZDLListEntry(QString originator, QString type){
	this->originator = originator;
	this->type = type;
}

ZDLListEntry::ZDLListEntry(ZDLWidget originator, QString type){
	/* Default until I change this class */
	Q_UNUSED(originator);
	this->originator = "net.vectec.zdlsharp.qzdl.zqwidget";
	this->type = type;
}

void ZDLListEntry::addData(QString key, QVariant newData){
	data.insert(key,newData);
}

void ZDLListEntry::removeData(QString key){
	data.remove(key);
}

QVariant ZDLListEntry::getData(QString key){
	return data.value(key);
}


