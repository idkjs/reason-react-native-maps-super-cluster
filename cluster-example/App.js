import React from "react";
import ClusteredMapView from "./src/ClusteredMapView.bs";

let DATA = [
  {
    location: {
      latitude: 1,
      longitude: 1
    }
  },
  {
    location: {
      latitude: 1,
      longitude: 1
    }
  }
];

const App = () => <ClusteredMapView data={DATA} accessor={m => m.location} />;

export default App;
