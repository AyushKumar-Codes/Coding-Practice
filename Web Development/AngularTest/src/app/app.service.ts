import { Injectable } from '@angular/core';
import{HttpClient} from '@angular/common/http';
import {Users} from './users'
import { Observable } from 'rxjs';
@Injectable({
  providedIn: 'root'
})
export class AppService {
  private HttpURL = "assets/data/user.json";
  constructor(private Http : HttpClient) { }

  getuser () :Observable<Users []>{
    return this.Http.get<Users[]>(this.HttpURL);
  }
}
