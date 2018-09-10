#include "DecompComponent.h"
#include "Hyperedge.h"


DecompComponent::~DecompComponent()
{
}

void DecompComponent::add(const HyperedgeSharedPtr & edge)
{
	if (!contains(edge)) {
		for (const auto v : edge->allVertices())
			if (MySep->contains(v))
				MyConnector.insert(v);//c connector collects vertices in the component that are also incident to the seperator
		MyComp.push_back(edge);
	}
}

//c checks if one of the edges is contained, and return the first one found, null otherwise
HyperedgeSharedPtr DecompComponent::containsOneOf(const list<HyperedgeSharedPtr>& edges) const
{
	for (auto &e : edges)
		if (contains(e))
			return e;

	return nullptr;
}

void DecompComponent::label(int label, int sepLabel) const
{
	for (auto e : MyComp) 
		e->setAllLabels(label);

	for (auto v : MyConnector) 
		v->setLabel(sepLabel);

	MySep->label(sepLabel);
}
