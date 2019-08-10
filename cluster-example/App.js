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

// Might have to use this file as a proxy
// Then render Comp below in Reason
const App = () => <ClusteredMapView data={DATA} accessor={m => m.location} />;

export default App;
